//
// Created by olile on 10.04.24.
//

#ifndef LISTA4L3_DIAMOND_H
#define LISTA4L3_DIAMOND_H

#include "Quadrangle.h"

class Diamond : public Quadrangle{
public:
    Diamond(double a, double angle) noexcept(false) : Quadrangle(a, a, a, a, angle){}
    double calcArea();
    std::string info();
    ~Diamond() = default;

};


#endif //LISTA4L3_DIAMOND_H
