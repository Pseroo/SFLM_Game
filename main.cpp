#include <iostream>
#include "SFML/Graphics.hpp"
#include "SFML/Window.hpp"
#include "player.hpp"

int main() {
    sf::RenderWindow wind;
    Player player;
    wind.create(sf::VideoMode(1600,900),"My window");
    wind.setFramerateLimit(60);
    sf::Texture* background_text = new sf::Texture;
    background_text->loadFromFile(getCurrentPath()+"\\textures\\grass_field.jpg");
    sf::Sprite bckgSprt(*background_text);
    while(wind.isOpen()){
        sf::Event event;
        while(wind.pollEvent(event)){
            if (event.type == sf::Event::Closed){
                wind.close();
            }

        }
        player.playerControl(event);
        wind.draw(bckgSprt);
        wind.draw(player.getSprite());
        wind.display();
    }
    return 0;
}
