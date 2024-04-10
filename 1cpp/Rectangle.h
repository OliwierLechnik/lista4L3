//
// Created by olile on 10.04.24.
//

#ifndef LISTA4L3_RECTANGLE_H
#define LISTA4L3_RECTANGLE_H

#include <Quadrangle.h>


class Rectangle : public Quadrangle{
public:
    Rectangle(double a, double b) noexcept(false) : Quadrangle(a,b,a,b,90){}
    double calcArea();
    std::string info();
    ~Rectangle() = default;
};


#endif //LISTA4L3_RECTANGLE_H
