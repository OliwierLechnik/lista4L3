//
// Created by olile on 10.04.24.
//

#ifndef LISTA4L3_PENTAGON_H
#define LISTA4L3_PENTAGON_H


#include "Shape.h"
class Pentagon : public Shape{
protected:
    double a;
public:
    Pentagon(double a);
    double calcArea();
    double calcCircumference();
    std::string info();
    ~Pentagon() = default;


};


#endif //LISTA4L3_PENTAGON_H
