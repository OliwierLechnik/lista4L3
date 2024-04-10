//
// Created by olile on 02.04.24.
//

#ifndef LISTA4L3_SHAPE_H
#define LISTA4L3_SHAPE_H

#include <string>


class Shape {
public:
    Shape() = default;
    virtual double calcArea() {return 0;}
    virtual double calcCircumference() {return 0;}
    virtual std::string info() {return "";}

};


#endif //LISTA4L3_SHAPE_H
