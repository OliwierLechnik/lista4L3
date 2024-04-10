//
// Created by olile on 10.04.24.
//

#ifndef LISTA4L3_PARALLELOGRAM_H
#define LISTA4L3_PARALLELOGRAM_H

#include "Quadrangle.h"

class Parallelogram : public Quadrangle {
public:
    Parallelogram(double a, double b, double angle) noexcept(false) : Quadrangle(a, b, a, b, angle){}
    double calcArea();
    std::string info();
    ~Parallelogram() = default;
};


#endif //LISTA4L3_PARALLELOGRAM_H
