/*
*	File Name: rectangle.cpp
*	Assignment Lab 2 exercise B
*	Completed by: Alexander Sembrat and Matthew Ho
*	Submission Date: Oct 1st 2021
*/
#include <iostream>
#include <cstring>
#include "point.h"
#include "shape.h"
#include "square.h"
#include "rectangle.h"
using namespace std;

Rectangle::Rectangle(double side_b, double side_a, double x, double y, const char *shapeName) : Square(side_a,x,y,shapeName){
	set_side_b(side_b);
}

Rectangle::Rectangle(const Rectangle &rect2) : Square(rect2){
	this->side_b = rect2.side_b;
}

Rectangle & Rectangle::operator=(const Rectangle &RHS_Rectangle){

    if(this == &RHS_Rectangle){
        return *this;
    }
    origin.setx(RHS_Rectangle.origin.getx());
    origin.sety(RHS_Rectangle.origin.gety());

    set_side_a(RHS_Rectangle.get_side_a());
    set_side_b(RHS_Rectangle.get_side_b());

    delete[] shapeName;
    shapeName = new char[(int)strlen(RHS_Rectangle.shapeName) + 1];
    strcpy(shapeName, RHS_Rectangle.shapeName);

    return *this;
}

Rectangle::~Rectangle(){
	
}

double Rectangle::area(){
	return side_a*side_b;
}

double Rectangle::perimeter(){
	return (2*side_a + 2*side_b);
}

double Rectangle::get_side_b() const{
	return side_b;
}

void Rectangle::set_side_b(double side_b){
	this->side_b = side_b;
}

void Rectangle::display(){
	cout << "Rectangle Name: " << get_shapeName() << endl;
	cout << "X-coordinate: " << origin.getx() << endl;
	cout << "Y-coordinate: " << origin.gety() << endl;
	cout << "Side a: " << get_side_a() << endl;
	cout << "Side b: " << get_side_b() << endl;
	cout << "Area: " << area() << endl;
	cout << "Perimeter: " << perimeter() << endl;
}