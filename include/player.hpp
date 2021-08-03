//
// Created by Paweł on 03.08.2021.
//

#ifndef SFML_GAME_1_PLAYER_HPP
#define SFML_GAME_1_PLAYER_HPP
#include "SFML/Graphics.hpp"
#include "simple_logic.hpp"
#include "physics.hpp"
class Player{
public:
    Player(std::string texture_path = getCurrentPath()+"\\textures\\player.png");
    ~Player();
    sf::Sprite& getSprite();
    void playerControl(sf::Event event);
    void setSpeed(sf::Vector2f vect){player_horizontal_speed_ = vect.x; player_vertical_speed_ = vect.y;}
    sf::Vector2f getSpeed(){return sf::Vector2f (player_horizontal_speed_, player_vertical_speed_);}
private:
    int player_text_width_ = 100;
    int player_text_height_= 200;
    float player_x_;
    float player_y_;
    float player_vertical_speed_;
    float player_horizontal_speed_;
    float player_base_speed_ = 3;
    sf::Texture *player_text_;
    sf::Texture *player_text_mirror_;
    sf::Sprite player_sprite_;
};


#endif //SFML_GAME_1_PLAYER_HPP
