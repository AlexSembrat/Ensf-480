#include "CurveCut.h"
#include <string.h>
#include <iostream>
#include <assert.h>
#include <math.h>

using namespace std;
//This is the default constructor.
CurveCut::CurveCut(int x, int y, double side_a_length, double side_b_length, double radius, const char *name):
					Shape(x, y, name),
					Rectangle(x, y, side_a_length, side_b_length, name), //need a name for the rectangle, will just use this as a place holder.
					Circle(x, y, radius, name){				  //need a name for the circle, will just use the shape name as a place holder.
																//This is a call to shape because curve cut is technically a shape still.
					 
	//This will check if the radius is bigger than either the width or the length 
	if(side_a_length <= side_b_length){
		if(radius > side_a_length){
			cout << "The radius is bigger than either the length or the width\n";
			exit(1);
		}
	}
	if(side_a_length > side_b_length){
		if(radius < side_b_length){
			cout << "The radius is bigger than either the length or the width\n";
			exit(1);
		}			
	}
	//I don't really know what should go in here at the moment.
}

//need to make the destructor


//This is the area function 

double CurveCut::area(){
	//First take the area of the rectangle 
	//Second take the area of the circle and devide it by 4
	//Third take the area of the rectangle and subtract it by the result of the circle devided by 4.
	//Return that number.
	return 	Rectangle::area() - (double)(Circle::area()/4);
	
}

double CurveCut::perimeter(){
	//First take the whole perimeter of the rectangle
	//Second take the circumference of the circle and devide it by 4
	//Third take the perimeter of the rectangle and subtract it 2*radius
	//Fourth add the result with the circumferenct devided by 4
	return (Rectangle::perimeter() - (double)(2*Circle::getRadius())) + (double)(Circle::perimeter()/4);
}



//stupid display won't work
void CurveCut::display(){
	cout << "CurveCut Name: " << getName() << endl;
	cout << "X-coordinate: " << origin.getx() << endl;
	cout << "Y-coordinate: " << origin.gety() << endl;
	cout << "Width: " << Rectangle::get_side_a() << endl;
	cout << "Length: " << Rectangle::get_side_b() << endl;
	cout << "Radius of the cut. " << this->Circle::getRadius() << endl;
	
}

