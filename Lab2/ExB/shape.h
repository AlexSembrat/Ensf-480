/*
*	File Name: shape.h
*	Assignment Lab 2 exercise B
*	Completed by: Alexander Sembrat and Matthew Ho
*	Submission Date: Oct 1st 2021
*/
#ifndef SHAPE_H
#define SHAPE_H

#include "point.h"

class Shape{
	
public:
	Shape(double x,double y, char *shapeName);
	Shape(const Shape &shape2); 					
	Shape& operator=(const Shape &RHS_Shape);			
	virtual ~Shape();										
	Point& getOrigin();
	char* getName();
	void display();
	double distance(Shape &other);
	static double distance(Shape &the_shape, Shape &other);
	void set_shapeName(char* shapeName);
	char* get_shapeName();
	void move(double dx, double dy);

protected:
	Point origin;
	char *shapeName;
};

#endif