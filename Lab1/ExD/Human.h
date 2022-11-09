#ifndef DICTIONARY_H
#define DICTIONARY_H
#include <iostream>
using namespace std;

class Human {
	
private:
    Point location;   // Location of an object of Human on a Cartisian Plain
    char *name;       // Human's name
	
	
public:
    Human(const char* name, double x, double y);
	~Human();
    char* get_name();    
    void set_name(char* name);
    Point get_point();
    virtual void display();
};
#endif