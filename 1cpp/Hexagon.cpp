//
// Created by olile on 10.04.24.
//

#include "Hexagon.h"

#include <stdexcept>
#include <cmath>

Hexagon::Hexagon(double a) noexcept(false) {
    if(a < 0){
        throw std::invalid_argument("żaden argument nie może być  ujemny.");
    }
    this->a = a;
}
double Hexagon::calcArea(){
    return this->a*this->a*sqrt(27)/2;
}
double Hexagon::calcCircumference(){
    return 6*this->a;
}
std::string Hexagon::info(){
    return "Hexagon";
}
