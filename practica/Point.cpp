#include "Point.h"
#include <iostream>

Point::Point(int _x, int _y): x{_x}, y{_y} {

}
Point::Point() : x{0}, y{0}{
}
Point::Point(const Point& pt){
    x = pt.x;
    y = pt.y;
}
Point::~Point(){
}

void Point::setX(int _x){
    this -> x = _x;
}

int Point::getX(){return this -> x;}

void Point::setY(int _y){
    this -> y = _y;
}

int Point::getY(){return this -> y;}

void Point::print(){std::cout << "( " << x << ", " << y << " )" << std::endl;}

bool Point::operator==(const Point &right) const
{
    return(x == right.x && y == right.y);
}

bool Point::operator!=(const Point &right) const
{
    return (*this == right);
}
