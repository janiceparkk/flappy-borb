#include <SFML/Graphics.hpp>
#include <iostream>

#define SCREEN_WIDTH 1024
#define SCREEN_HEIGHT 1024

int main() {
    // Open Window
    sf::RenderWindow window(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), "Awesome Game");
    
    // Game Loop
    while (window.isOpen()) {
        // Handle inputs/events
        sf::Event event;
        
        while (window.pollEvent(event)) {
            switch (event.type) {
                // Check if window is closed
                case sf::Event::Closed:
                    window.close();
                    break;
            }
        }
        // Update Game Logic
        window.clear();
        
        // Draw Objects
        window.display();
    }
    return EXIT_SUCCESS;
}
