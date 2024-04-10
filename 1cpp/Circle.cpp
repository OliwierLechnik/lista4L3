//
// Created by olile on 02.04.24.
//
#include <stdexcept>

#include "Circle.h"
#include "Square.h"
#include <cmath>


Circle::Circle(double radius) noexcept(false){
    if(radius<0){
        throw std::invalid_argument("Radious must be positive.");
    }
    this->radius = radius;
}

double Circle::calcArea() {
    return M_PI*this->radius*this->radius;
}

double Circle::calcCircumference() {
    return 2*M_PI*this->radius;
}

std::string Circle::info() {
    return "circle";
}