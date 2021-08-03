//
// Created by Paweł on 03.08.2021.
//

#include "physics.hpp"


void Physics::accByGravity(Player& player) {
    sf::Vector2f current_speed = player.getSpeed();
    player.setSpeed(sf::Vector2f(0, current_speed.x+gravity_acc_));
}