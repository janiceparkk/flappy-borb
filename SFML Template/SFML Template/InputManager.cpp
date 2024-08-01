#include "InputManager.hpp"

namespace Sonar {
    bool IsSpriteClicked(sf::Sprite object, sf::Mouse::Button button, sf::RenderWindow &window) {
        if (sf::Mouse::isButtonPressed(button)) {
            sf::IntRect tempRect(object.getPosition().x, object.getPosition().y, object.getGlobalBounds().width, object.getGlobalBounds().height);
            
            // check for collisions: if mouse clicked on the object
            if (tempRect.contains(sf::Mouse::getPosition(window))) {
                return true;
            }
        }
        return false;
    }

    sf::Vector2i GetMousePosition(sf::RenderWindow &window) {
        return sf::Mouse::getPosition(window);
    }
}
