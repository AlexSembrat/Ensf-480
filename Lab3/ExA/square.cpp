/*
*	File Name: square.cpp
*	Assignment Lab 2 exercise B
*	Completed by: Alexander Sembrat and Matthew Ho
*	Submission Date: Oct 1st 2021
*/
#include <iostream>
#include <cstring>
#include "point.h"
#include "shape.h"
#include "square.h"
using namespace std;

Square::Square(double side_a, double x, double y, const char *shapeName) : Shape(x,y,shapeName){
	set_side_a(side_a);
}

Square::Square(const Square &square2) : Shape(square2){
	this->side_a = square2.side_a;
}

Square & Square::operator=(const Square &RHS_Square){
    if(this == &RHS_Square){
        return *this;
    }

    origin.setx(RHS_Square.origin.getx());
    origin.sety(RHS_Square.origin.gety());

    set_side_a(RHS_Square.get_side_a());

    delete[] shapeName;
    shapeName = new char[(int)strlen(RHS_Square.shapeName) + 1];
    strcpy(shapeName, RHS_Square.shapeName);

    return *this;

}

Square::~Square(){
	
}

double Square::area(){
	return side_a*side_a;
}

double Square::perimeter(){
	return 4*side_a;
}

double Square::get_side_a() const{
	return side_a;
}

void Square::set_side_a(double side_a){
	this->side_a = side_a;
}

void Square::display(){
	cout << "Square Name: " << get_shapeName() << endl;
	cout << "X-coordinate: " << origin.getx() << endl;
	cout << "Y-coordinate: " << origin.gety() << endl;
	cout << "Side a: " << get_side_a() << endl;
	cout << "Area: " << area() << endl;
	cout << "Perimeter: " << perimeter() << endl;
}

Square::Square() {}