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
#include <stdexcept>

void info(Shape *shape){
    std::cout << shape->info() << std::endl;
}
void area(Shape *shape){
    std::cout << shape->calcArea() << std::endl;
}
void circumference(Shape *shape){
    std::cout << shape->calcCircumference() << std::endl;
}

enum Shapes{
    CircleFlag      = 0,
    QuadrangleFlag  = 1,
    PentagonFlag    = 2,
    HexagonFlag     = 3
};

Shapes interpretFlag(std::string flag) noexcept(false){
    int len = flag.size();
    if(len!=2){
        throw std::invalid_argument("flag must be 2 characters long.");
    }
    if(flag[0] != '-'){
        throw std::invalid_argument("flag must start with '-'.");
    }
    switch (flag[1])
    {
    case 'c':
        return Shapes::CircleFlag;
        break;
    case 'q':
        return Shapes::QuadrangleFlag;
        break;
    case 'p':
        return Shapes::PentagonFlag;
        break;
    case 'h':
        return Shapes::HexagonFlag;
        break;
    default:
        throw std::invalid_argument("No such flag of value '" + flag + "' exists.");
        break;
    }
}

int main(int argc, char *argv[]){
    
    if(argc < 2){
        return 0;
    }

    std::vector<double> parsed;

    for(int i = 2; i < argc; i++){
        try
        {
            double tmp = std::stod(argv[i]);
            if(tmp < 0){
                std::cerr << "Invalid value of '" << argv[i] <<"' should be positive." << '\n';
                return 0;
            }
            parsed.push_back(tmp);
        }
        catch(const std::exception& e)
        {
            std::cerr << "Invalid value of '" << argv[i] <<"' should be a number." << '\n';
            return 0;
        }
    }

    Shape *shape;

    switch (interpretFlag(argv[1]))
    {
    case Shapes::CircleFlag:
        if(parsed.size() != 1){
            std::cerr << "Incorect number of following arguments, should be 1 but is " << parsed.size() << ".\n";
            return 0;
        }
        shape = static_cast<Shape *>(new Circle(parsed[0]));
        break;
    case Shapes::PentagonFlag:
        if(parsed.size() != 1){
            std::cerr << "Incorect number of following arguments, should be 1 but is " << parsed.size() << ".\n";

            return 0;
        }

        shape = static_cast<Shape *>(new Pentagon(parsed[0]));
        break;
    case Shapes::HexagonFlag:
        if(parsed.size() != 1){
            std::cerr << "Incorect number of following arguments, should be 1 but is " << parsed.size() << ".\n";
            return 0;
        }
        shape = static_cast<Shape *>(new Hexagon(parsed[0]));
        break;
    case Shapes::QuadrangleFlag:
        if(parsed.size() != 5){
            std::cerr << "Incorect number of following arguments, should be 5 but is " << parsed.size() << ".\n";
            return 0;
        }
        try
        {
            if(parsed[0]==parsed[1] && parsed[2]==parsed[1] && parsed[2]==parsed[3]){
                if(parsed[4]==90){
                    shape = static_cast<Shape *>(new Square(parsed[0]));
                }else{
                    shape = static_cast<Shape *>(new Diamond(parsed[0], parsed[4]));
                }
            }else if(parsed[0]==parsed[2] && parsed[1]==parsed[3]){
                if(parsed[4]==90){
                    shape = static_cast<Shape *>(new Rectangle(parsed[0], parsed[1]));
                }else{
                    shape = static_cast<Shape *>(new Parallelogram(parsed[0], parsed[1], parsed[4]));
                }
            }else{
                shape = static_cast<Shape *>(new Quadrangle(parsed[0], parsed[1], parsed[2], parsed[3], parsed[4]));
            }
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            return 0;
        }
        

        break;
    
    default:
        return 0;
        break;
    }

    info(shape);
    area(shape);
    circumference(shape);

    return 0;
}

