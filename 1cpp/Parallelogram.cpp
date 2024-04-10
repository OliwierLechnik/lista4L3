//
// Created by olile on 10.04.24.
//

#include "Parallelogram.h"

#include <cmath>


double Parallelogram::calcArea() {
    return sin(this->angle*M_PI/180)*this->a*this->b;
}

std::string Parallelogram::info(){
    return "Parallelogram";
}