#pragma once

#include <SFML/Graphics.hpp>
#include "State.hpp"
#include "Game.hpp"
#include "Pipe.hpp"
#include "Land.hpp"
#include "Bird.hpp"
#include "Collision.hpp"
#include "Flash.hpp"

namespace Sonar {
    class GameState : public State {
        public:
            GameState(GameDataRef data);
            
            void Init();
            void HandleInput();
            void Update(float dt);
            void Draw(float dt);
        
        private:
            GameDataRef _data;
            sf::Sprite _background;
            std::unique_ptr<Pipe> pipe;
            std::unique_ptr<Land> land;
            std::unique_ptr<Bird> bird;
            std::unique_ptr<Flash> flash;
            Collision collision;
            sf::Clock clock;
            int _gameState;
    };
}
