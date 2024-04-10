//
// Created by olile on 09.04.24.
//

#include "Quadrangle.h"
#include <stdexcept>

Quadrangle::Quadrangle(double a, double b, double c, double d, double angle) noexcept(false){
    if(a < 0 || b < 0 || d < 0 || c < 0 || angle >= 180 || angle <= 0){
        throw std::invalid_argument("żaden argument nie może być  ujemny i kąt mosi znajdować się w przedziale (0,180)");
    }
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->angle = angle;
}

double Quadrangle::calcCircumference() {
    return this->a+this->b+this->c+this->d;
}

std::string Quadrangle::info() {
    return "Quadrangle";
}