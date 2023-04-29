// Dylan Sarell
// 4/28/23
// Main Function for Coordinates Class

#include <iostream>
#include "coordinates.hpp"

using std::cout; using std::cin; using std::endl;


int main() {

    // Every time I Declare a Variable in C++ you have to declare it with a Type.
    // This is a object of type Coordinates.
    cout << "Default Coordinates: ";
    coordinates point1; 
    cout << point1 << std::endl;
    
    // This is a variable of type integer.
    int num1, num2, num3;
    cout << "Please enter x-coordinate: ";
    cin >> num1;
    cout << "Please enter y-coordinate: ";
    cin >> num2;
    coordinates point2(num1, num2);
    cout << "Your 2-D Point is: " << point2 << endl;

    // I add 2 Coordinates of dimension 2 and 3 together and you get a 
    // 3rd Dimension Coordinate Because it assumes that your z-coordinate 
    // for your 2-D Coordinate is 0. This is done using Dynamic Memory and
    // Overloading the Addition and Assignment operator.

    coordinates point3(-1, 7, 9);
    cout << "My point is: " << point3 << endl;

    cout << "Adding My Point with yours: " << endl;
    point3 = point3 + point2;
    cout << "Your 3-D Point is: " << point3 << endl;

    return 0;
}