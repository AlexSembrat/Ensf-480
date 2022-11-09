
#include <cstring>
#include <iostream>
#include "Human.h"
#include "Point.h"
using namespace std;

Human::Human(const char* name, double x, double y): name(new char[strlen(name)+1]) {
    strcpy(this ->name, name);
    location.set_x(x);
    location.set_y(y);
}

Human::~Human(){
	delete [] name;
	delete location;
}

char* Human::get_name(){return name;}
	
void Human::set_name(char* name){
	this->name = new char[strlen(name)+1];        
    strcpy(this ->name, name);
}

Point Human::get_point() const {return location;}

virtual void Human::display() {                      
    cout << "Human Name: " << name << "\nHuman Location: "
    << location.get_x() << " ,"
    << location.get_y() << ".\n" << endl;
}


