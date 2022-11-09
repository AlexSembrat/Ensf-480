/*
*	File Name: point.h
*	Assignment Lab 2 exercise B
*	Completed by: Alexander Sembrat and Matthew Ho
*	Submission Date: Oct 1st 2021
*/
#ifndef POINT_H
#define POINT_H


class Point{
  
public:

	Point(double x, double y); 
	Point(const Point &point2); 
	virtual ~Point();					
	void display();
	int counter();
	double distance(Point &point);		
	static double distance(Point &point1, Point &point2);		
	double getx() const; 
	double gety() const; 
	void setx(double x);
	void sety(double y);

	//deafult
	Point();

private:
	double x;
	double y;
	int id;
};

#endif