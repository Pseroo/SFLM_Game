//
// Created by Paweł on 03.08.2021.
//

#ifndef SFML_GAME_1_PHYSICS_HPP
#define SFML_GAME_1_PHYSICS_HPP
#include "player.hpp"

class Physics{
public:
    static void accByGravity(Player& player);
private:
    static float gravity_acc_;

};

#endif //SFML_GAME_1_PHYSICS_HPP
