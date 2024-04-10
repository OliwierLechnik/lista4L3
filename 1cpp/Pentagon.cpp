//
// Created by olile on 10.04.24.
//

#include "Pentagon.h"

#include <cmath>
#include <stdexcept>

Pentagon::Pentagon(double a) {
    if(a < 0){
        throw std::invalid_argument("żaden argument nie może być  ujemny.");
    }
    this->a = a;
}

double Pentagon::calcArea(){
    return sqrt(5*(5+2*sqrt(5)))*this->a*this->a/4;
}

double Pentagon::calcCircumference(){
    return this->a*5;
}

std::string Pentagon::info(){
    return "Pentagon";
}