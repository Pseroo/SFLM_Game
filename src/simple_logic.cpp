//
// Created by Paweł on 03.08.2021.
//

#include "simple_logic.hpp"
#include "cmath"
#include <iostream>
std::string getCurrentPath(){
    char path[256];
    GetCurrentDirectory(256, path);
    return std::string(path);
};

void normVector(sf::Vector2f& vect){
    if(vect.x == 0 and vect.y == 0) return; //
    double divider = sqrt(vect.x*vect.x + vect.y*vect.y);
    vect.x = vect.x/divider;
    vect.y = vect.y/divider;
};