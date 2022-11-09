#ifndef CURVECUT_H
#define CURVECUT_H
#include "rectangle.h"
#include "circle.h"
#include "shape.h"


//Here Rectangle must be called first and then circle.
//We will add the shape of it
//We changed square's shape into virtual in the square.h
//We changed circles's shape into virtual in the circle.h 
class CurveCut: virtual public Shape, public Rectangle, public Circle
{
public:
	//constructor 
	CurveCut(int x, int y, double side_a_length, double side_b_length, double radius, const char *name);
	//copy constructor
	//CurveCut(const CurveCut &source);
	//destructor
	//virtual ~CurveCut();
	//This should calculate the area of the of the rectangle and the part it cuts off 
	double area();
	//This should calculate the perimeter of the shape.
	double perimeter();
	//We will now display the information about the cut shape.
	void display();
	
	//using Shape::getName;
	//using Point::getx;
	//using Point::gety;
	
};

#endif