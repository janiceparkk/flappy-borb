#include <sstream>
#include <iostream>

#include "GameState.hpp"
#include "DEFINITIONS.hpp"

namespace Sonar {
    GameState::GameState(GameDataRef data) : _data(data) {}

    void GameState::Init() {
        _data->assets.LoadTexture("Game Background", GAME_BACKGROUND_FILEPATH);
        _data->assets.LoadTexture("Pipe Up", PIPE_UP_FILEPATH);
        _data->assets.LoadTexture("Pipe Down", PIPE_DOWN_FILEPATH);
        _data->assets.LoadTexture("Land", LAND_FILEPATH);
        _data->assets.LoadTexture("Bird Frame 1", BIRD_FRAME_1_FILEPATH);
        _data->assets.LoadTexture("Bird Frame 2", BIRD_FRAME_2_FILEPATH);
        _data->assets.LoadTexture("Bird Frame 3", BIRD_FRAME_3_FILEPATH);
        _data->assets.LoadTexture("Bird Frame 4", BIRD_FRAME_4_FILEPATH);
        
        pipe = std::make_unique<Pipe>(_data);
        land = std::make_unique<Land>(_data);
        bird = std::make_unique<Bird>(_data);
        
        _background.setTexture(this->_data->assets.GetTexture("Game Background"));
    }

    void GameState::HandleInput() {
        sf::Event event;
        
        while (_data->window.pollEvent(event)) {
            if (sf::Event::Closed == event.type) {
                _data->window.close();
            }
            
            // Temp: Testing if Pipes Spawn
            if (_data->input.IsSpriteClicked(_background, sf::Mouse::Left, _data->window)) {
                
            }
        }
    }

    void GameState::Update(float dt) {
        pipe->MovePipes(dt);
        land->MoveLand(dt);
        
        if (clock.getElapsedTime().asSeconds() > PIPE_SPAWN_FREQUENCY) {
            pipe->RandomizePipeOffset();
            pipe->SpawnInvisiblePipe();
            pipe->SpawnBottomPipe();
            pipe->SpawnTopPipe();
            
            clock.restart();
        }
        
        bird->Animate(dt);
    }

    void GameState::Draw(float dt) {
        _data->window.clear();
        _data->window.draw(_background);
        pipe->DrawPipes();
        land->DrawLand();
        bird->Draw();
        _data->window.display();
    }
}
