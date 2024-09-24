#include "Game.hpp"
#include "SplashState.hpp"

namespace Sonar {
    Game::Game(int width, int height, std::string title) {
        _data->window.create(sf::VideoMode(width, height), title, sf::Style::Close | sf::Style::Titlebar);
        _data->machine.AddState(StateRef(new SplashState(this->_data)));
        this->Run();
    }

    void Game::Run() {
        float newTime, frameTime, interpolation;
        float currentTime = this->_clock.getElapsedTime().asSeconds();
        float accumulater = 0.0f;
        
        while (this->_data->window.isOpen()) {
            this->_data->machine.ProcessStateChanges();
            newTime = this->_clock.getElapsedTime().asSeconds();
            frameTime = newTime - currentTime;
            
            if (frameTime > 0.25f) {
                frameTime = 0.25f;
            }
            
            currentTime = newTime;
            accumulater += frameTime;
            
            while (accumulater >= dt) {
                this->_data->machine.GetActiveState()->HandleInput();
                this->_data->machine.GetActiveState()->Update(dt);
                accumulater -= dt;
            }
            
            interpolation = accumulater / dt;
            this->_data->machine.GetActiveState()->Draw(interpolation);
        }
    }
}
