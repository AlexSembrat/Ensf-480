#ifndef DICTIONARY_H
#define DICTIONARY_H
#include <iostream>
using namespace std;

class Point{
	
	friend class Human;
	
	private:
		double x;     // x coordinate of a location on Cartisian Plain
		double y;     // y coordinate of a location on Cartisian Plain
	
	public:
		Point(double a, double b);
		double get_x();                       
		double get_y();                         
		void set_x(double a);
		void set_y(double a);
};
#endif