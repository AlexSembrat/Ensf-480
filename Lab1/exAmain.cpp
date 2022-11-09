// exAmain.cpp
// ENSF 480 Lab 1 - Exercise A
// Author - M. Moussavi

#include <iostream>
using namespace std;
#include "mystring.h"

int main(void)
{
  Mystring *ar[3];
  Mystring c = 3;
  ar[2] = &c; cout << "\nLine 14" << endl;
  ar[1] = ar[0] = nullptr;
    
  // A BLOCK OF CODE BEGINS HERE
  {
    Mystring x[2];
						  cout << "\nLine 20" << endl;
    x[0].set_str("ENEL"); cout << "\nLine 21" << endl;
    x[1].set_str("0");	  cout << "\nLine 22" << endl;
    Mystring* z = new Mystring("4"); cout << "\nLine 23" << endl;
      cout << "\nLine 24" << endl;
    x[0].append(*z).append(x[1]); 
  cout << "\nLine 26" << endl;
    Mystring mars = x[0];
cout << "\nLine 28" << endl;
    x[1] = x[0];
   cout << "\nLine 30" << endl; 
    Mystring jupiter("White");
cout << "\nLine 32" << endl;
      ar[0] = new Mystring ("Yellow");

  } // BLOCK ENDS HERE
cout << "\nLine 36" << endl;
  c.set_str("A"); cout << "\nLine 37" << endl;
  delete  ar [0];
 cout << "\nLine 39" << endl;
  Mystring d = "Green";
  
  cout << "\nProgram terminated successfully." <<endl;
  return 0;
}

