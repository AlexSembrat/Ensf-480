/*
*	File Name: point.cpp
*	Assignment Lab 2 exercise B
*	Completed by: Alexander Sembrat and Matthew Ho
*	Submission Date: Oct 1st 2021
*/
#include <iostream>
#include <cstring>
#include <cmath>
#include "point.h"

using namespace std;

static int numbOfObj = 0; 
static int global_id = 1000;

Point::Point(double x, double y):x(x), y(y), id(++global_id){ 
	numbOfObj++; //increment numbOfObj	
}

Point::Point(const Point &point2){
	this->x = point2.x;
	this->y = point2.y;
}

Point::~Point(){
	numbOfObj--;
}

int counter(){
	return numbOfObj;
}

double Point::distance(Point &point){
	return sqrt(pow(getx() - point.getx(),2) + pow(gety() - point.gety(),2));
}

double Point::distance(Point & point1, Point & point2){  
	return sqrt(pow(point1.getx() - point2.getx(),2) + pow(point1.gety() - point2.gety(),2));
}

double Point::getx() const{
	return x;
}

double Point::gety() const{
	return y;
}

void Point::setx(double x){
	(*this).x = x;
}

void Point::sety(double y){
	(*this).y = y;
}


void Point::display(){
	cout << "X-coordinate:  " << getx();
	cout << "Y-coordinate:  " << gety();
}

//default

Point::Point() {}
