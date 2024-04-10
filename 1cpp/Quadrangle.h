//
// Created by olile on 09.04.24.
//

#ifndef LISTA4L3_QUADRANGLE_H
#define LISTA4L3_QUADRANGLE_H

#include "Shape.h"

class Quadrangle : public Shape {
protected:
    double a,b,c,d;
    double angle;

public:
    Quadrangle(double a, double b, double c, double d, double angle) noexcept(false);
    virtual double calcArea(){return 0;}
    double calcCircumference();
    virtual std::string info();
    ~Quadrangle() = default;
};


#endif //LISTA4L3_QUADRANGLE_H
