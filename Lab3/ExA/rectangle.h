/*
*	File Name: rectangle.h
*	Assignment Lab 2 exercise B
*	Completed by: Alexander Sembrat and Matthew Ho
*	Submission Date: Oct 1st 2021
*/
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "square.h"

class Rectangle : virtual public Square{

public:
	Rectangle(double side_b, double side_a, double x, double y, const char *shapeName);
	Rectangle(const Rectangle &rect2);						
	Rectangle& operator=(const Rectangle &RHS_Rectangle);			
	virtual ~Rectangle();
	double area();
	double perimeter();
	double get_side_b() const;
	void set_side_b(double side_b);
	void display();
	
protected:
	double side_b;
};

#endif