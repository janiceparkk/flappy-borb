#pragma once

#include <SFML/Graphics.hpp>
#include "State.hpp"
#include "Game.hpp"
#include "Pipe.hpp"
#include "Land.hpp"

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
            sf::Clock clock;
    };
}
