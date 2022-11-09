/*
*	File Name: main.cpp
*	Assignment Lab 2 exercise B
*	Completed by: Alexander Sembrat and Matthew Ho
*	Submission Date: Oct 1st 2021
*/
#include <iostream>
#include "point.h"
#include "shape.h"
#include "square.h"
#include "rectangle.h"
#include "CurveCut.h"
#include "graphicsWorld.h"
using namespace std;


int main(){
	GraphicsWorld world;
	world.run();
	cout << "End of Main" << endl;
	return 0;
}