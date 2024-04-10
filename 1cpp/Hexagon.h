//
// Created by olile on 10.04.24.
//

#ifndef LISTA4L3_HEXAGON_H
#define LISTA4L3_HEXAGON_H

#include "Shape.h"

class Hexagon : public Shape{
protected:
    double a;
public:
    Hexagon(double a) noexcept(false);
    double calcArea();
    double calcCircumference();
    std::string info();
    ~Hexagon() = default;

};


#endif //LISTA4L3_HEXAGON_H
