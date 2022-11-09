
#include <cstring>
#include <iostream>
#include "Point.h"
#include "Human.h"
using namespace std;

Point::Point(double a, double b): x(a), y(b){}

double Point::get_x(){return x;}	//const

double Point::get_y(){return y;}	//const

void Point::set_x(double a) { x = a;}

void Point::set_y(double a) { y = a;}
