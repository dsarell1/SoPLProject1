// Dylan Sarell
// 4/28/23
// Function Definitions for Coordinates Class

#include <iostream>
#include "coordinates.hpp"

using std::cout; using std::cin; using std::endl;

// Default Constructor
coordinates::coordinates() {
    dimension = 2;
    point = new int[dimension];
    for (int i = 0; i < dimension; i++) {
        point[i] = 0;
    }
}
// 2-Dimensional Coordinates Constructor done by call-by-value
coordinates::coordinates(int num1, int num2) {
    dimension = 2;
    point = new int[dimension];
    point[0] = num1;
    point[1] = num2;

}
// 3-Dimensional Coordinates Constructor done by call-by-value
coordinates::coordinates(int num1, int num2, int num3) {
    dimension = 3;
    point = new int[dimension];
    point[0] = num1;
    point[1] = num2;
    point[2] = num3;
}

// My Coordinates Class needs a Destructor because I need to Manually Deallocate the memory 
// for the Dynamic Memory usage in my class.
coordinates::~coordinates() {
    delete[] point;
}

// Copy Constructor
coordinates::coordinates(const coordinates& rhs) {
    dimension = rhs.dimension;
    point = new int[dimension];
    for (int i = 0; i < dimension; ++i) {
        point[i] = rhs.point[i];
    }

}
// Swap
// The Swap function needs a Reference of the objects so that it can change and update the
// values of the coordinates with a different object. So that is why this is done by call-by-reference.
// The Coordinates need swaped.
void coordinates::swap(coordinates& rhs) {
    
    int* tempPoint = point;
    point = rhs.point;
    rhs.point = tempPoint;
    
    int tempDim = dimension;
    dimension = rhs.dimension;
    rhs.dimension = dimension;
}
// Index Operator
// This Function is done by Call-by-value which is only copies/needs the
// value of the variable Num.
int& coordinates::operator[] (int num) {
    return point[num];
}
// Assingment Operator
coordinates& coordinates::operator= (coordinates rhs) {
    swap(rhs);
    return *this;
}
// Output Operator
std::ostream& operator<< (std::ostream& output, coordinates& rhs) {
    output << "(";
    for(int i = 0; i < rhs.getdimension(); i++) {
        if (i == rhs.getdimension()-1) {
            output << rhs[i];
            break;
        }
        output << rhs[i] << ", ";
    }
    output << ")";
    return output;
}
// add operator
coordinates& coordinates::operator+ (const coordinates& rhs) {
    coordinates result;
    result.dimension = rhs.dimension;
    for (int i = 0; i < dimension; i++) {
        result.point[i] = rhs.point[i] + point[i];
    }
    swap(result);
    return *this;
}