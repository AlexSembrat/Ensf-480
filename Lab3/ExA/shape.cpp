/*
*	File Name: shape.cpp
*	Assignment Lab 2 exercise B
*	Completed by: Alexander Sembrat and Matthew Ho
*	Submission Date: Oct 1st 2021
*/
#include <iostream>
#include <cmath>
#include <cstring>
#include "point.h"
#include "shape.h"
using namespace std;

Shape::Shape(double x, double y, const char* shapeName) : origin(x,y){
	this->shapeName = new char[(int)strlen(shapeName)+1];
	strcpy(this->shapeName, shapeName);
}

Shape::Shape(const Shape &shape2) : origin(shape2.origin){
	this->shapeName = new char[(int)strlen(shape2.shapeName)+1];
	strcpy(this->shapeName, shape2.shapeName);
}

Shape& Shape::operator=(const Shape &RHS_Shape){
    if(this == &RHS_Shape){
        return *this;
    }
    origin.setx(RHS_Shape.origin.getx());
    origin.sety(RHS_Shape.origin.gety());

    delete [] shapeName;
    shapeName = new char[(int)strlen(RHS_Shape.shapeName) + 1];
    strcpy(shapeName, RHS_Shape.shapeName);
    return *this;	
}

Shape::~Shape(){
	delete [] shapeName;
}

Point& Shape::getOrigin(){
	return origin;
}

char* Shape::getName(){
	return shapeName;
}

void Shape::display(){
	cout << "Shape Name: " << get_shapeName() << endl;
	cout << "X-coordinate: " << origin.getx() << endl;
	cout << "Y-coordinate: " << origin.gety() << endl;
}

double Shape::distance(Shape &other){
	double x1 = origin.getx();
	double x2 = other.origin.getx();
	double y1 = origin.gety();
	double y2 = other.origin.gety();
	
	return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}

double Shape::distance(Shape &the_shape, Shape &other){
	double x1 = the_shape.origin.getx();
	double x2 = other.origin.getx();
	double y1 = the_shape.origin.gety();
	double y2 = other.origin.gety();
	
	return sqrt(pow(x2-x1,2)+pow(y2-y1,2));
}

void Shape::set_shapeName(char* shapeName){
	this->shapeName = shapeName;
}

char* Shape::get_shapeName(){
	return shapeName;
}

void Shape::move(double dx, double dy){
	origin.setx(origin.getx()+dx);
	origin.sety(origin.gety()+dy);
}

//default constructor

Shape::Shape() {};
