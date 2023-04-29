// Dylan Sarell
// 4/28/23
// 

#include <iostream>
#include "project.hpp"

using std::cout; using std::cin; using std::endl;


int main() {

    // Every time I Declare a Variable in C++ you have to declare it with a Type.
    // This is a object of type Coordinates.
    coordinates t; 
    cout << t << std::endl;
    
    // This is a variable of type integer.
    int num1, num2;
    cout << "Please enter x-coordinate: ";
    cin >> num1;
    cout << "Please enter y-coordinate: ";
    cin >> num2;
    coordinates u(num1, num2);
    cout << "Your Point is: " << u << endl;

    return 0;
}