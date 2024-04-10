//
// Created by olile on 02.04.24.
//

#ifndef LISTA4L3_CIRCLE_H
#define LISTA4L3_CIRCLE_H

#include <Shape.h>


class Circle : public Shape{
    double radius;
public:
    Circle(double r)noexcept(false);
    double calcArea();
    double calcCircumference();
    std::string info();
};


#endif //LISTA4L3_CIRCLE_H
