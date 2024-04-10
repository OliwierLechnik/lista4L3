//
// Created by olile on 10.04.24.
//

#include "Diamond.h"

#include <cmath>

double Diamond::calcArea() {
    return sin(this->angle*M_PI/180)*this->a*this->a;
}

std::string Diamond::info(){
    return "Diamond";
}