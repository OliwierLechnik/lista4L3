//
// Created by olile on 09.04.24.
//

#ifndef LISTA4L3_SQUARE_H
#define LISTA4L3_SQUARE_H

#include "Quadrangle.h"
#include <stdexcept>

class Square : public Quadrangle{
public:
    Square(double a) noexcept(false) : Quadrangle(a,a,a,a,90){}
    double calcArea();
    std::string info();
    ~Square() = default;
};


#endif //LISTA4L3_SQUARE_H
