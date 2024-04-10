//
// Created by olile on 02.04.24.
//
#include <iostream>

#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
#include "Pentagon.h"
#include "Hexagon.h"
#include "Parallelogram.h"
#include "Diamond.h"



#include <vector>

void info(Shape *shape){
    std::cout << shape->info() << std::endl;
}
void area(Shape *shape){
    std::cout << shape->calcArea() << std::endl;
}
void circumference(Shape *shape){
    std::cout << shape->calcCircumference() << std::endl;
}



int main(int argc, char *argv[]){
    return 0;
}


//std::vector<Shape*>shapes;
//shapes.push_back(new Circle(5));
//shapes.push_back(new Rectangle(5,8));
//shapes.push_back(new Square(5));
//shapes.push_back(new Pentagon(5));
//shapes.push_back(new Hexagon(5));
//shapes.push_back(new Parallelogram(5,8,30));
//shapes.push_back(new Diamond(5,30));
//shapes.push_back(new Quadrangle(5,5,4,4,69));
//
//for(const auto shape : shapes){
//info(shape);
//area(shape);
//circumference(shape);
//
//}