/*
*	File Name: square.h
*	Assignment Lab 2 exercise B
*	Completed by: Alexander Sembrat and Matthew Ho
*	Submission Date: Oct 1st 2021
*/
#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"

class Square : public Shape{
	
public:
	Square(double side_a, double x, double y, char *shapeName);
	Square(const Square &square2);						
	Square& operator=(const Square& RHS_Square);				
	virtual ~Square();
	double area();
	double perimeter();
	double get_side_a() const;
	void set_side_a(double side_a);
	void display();
	
protected:
	double side_a;
};

#endif