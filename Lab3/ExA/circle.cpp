#include "Circle.h"
#include <string.h>
#include <iostream>
#include <assert.h>
#include <math.h>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

using namespace std;

Circle::Circle(double x, double y, double rad, const char *shape_name) : Shape(x, y, shape_name)
{
    this->radius = rad;
}

Circle::~Circle(){}

double Circle::area()
{
    return (double)(M_PI * pow(this->radius, 2));
}

double Circle::perimeter()
{
    return (double)(M_PI * 2 * this->radius);
}

double Circle::getRadius() const
{
    return this->radius;
}

void Circle::setRadius(double rad)
{
    this->radius = rad;
}

void Circle::display()
{
    cout << "Circle Name: " << this->getName() << endl;
    cout << "X-coordinate: " << this->origin.getx() << endl;
    cout << "Y-coordinate: " << this->origin.gety() << endl;
    cout << "Radius: " << this->getRadius() << endl;
    cout << "Area: " << this->area() << endl;
    cout << "Perimeter: " << this->perimeter() << endl;
}

Circle::Circle(const Circle &source): Shape(source)
{
    cout << "inside of Square copy ctr " << endl;
    this->setRadius(source.getRadius());
}

// assigment operator in Sqaure   
Circle &Circle::operator=(const Circle &Circle_input)
{
    cout << "calling assignemnt operator in class Square" << endl;
    if (this == &Circle_input){
        return *this;
    }
    delete[] this->shapeName;
    this->shapeName = new char[(int)strlen(Circle_input.shapeName) + 1];
    strcpy(shapeName, Circle_input.shapeName);
    assert(this->shapeName);
    this->setRadius(Circle_input.getRadius());
    // assigns the new values to origin
    origin.setx(Circle_input.origin.getx()); 
    origin.sety(Circle_input.origin.gety()); 
        return *this;
}