//
// Created by Paweł on 03.08.2021.
//

#include "player.hpp"
#include "SFML/Window.hpp"
#include "simple_logic.hpp"
#include <iostream>
Player::Player(std::string texture_path) {
    player_text_ = new sf::Texture;
    player_text_->loadFromFile(texture_path, sf::IntRect(0,0,200,200));
    player_text_mirror_ = new sf::Texture;
    player_text_mirror_->loadFromFile(getCurrentPath()+"\\textures\\player_mirror.png");
    player_sprite_.setTexture(*player_text_);
    player_sprite_.setScale(sf::Vector2f(0.6f,0.6f));

}
sf::Sprite& Player::getSprite() {
    return player_sprite_;
}

Player::~Player() {
    delete player_text_mirror_;
    delete player_text_;
}

void Player::playerControl(sf::Event event) {
    sf::Vector2f playermove(0,0);
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::W)){
        playermove.y-= 1;
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::S)){
        playermove.y+= 1;
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::A)){
        playermove.x-= 1;
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::D)){
        playermove.x+= 1;
    }
    normVector(playermove);
    if(playermove.x > 0 ) player_sprite_.setTexture(*player_text_);
    if(playermove.x < 0 ) player_sprite_.setTexture(*player_text_mirror_);
    playermove.x *= player_base_speed_;
    playermove.y *= player_base_speed_;
    player_sprite_.move(playermove);
    player_x_ = player_sprite_.getPosition().x+player_text_width_/2;
    player_y_ = player_sprite_.getPosition().y+player_text_height_/2;

}
