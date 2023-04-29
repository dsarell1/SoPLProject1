// Dylan Sarell
// 4/28/23
// 

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
coordinates::coordinates(int num1, int num2) {
    dimension = 2;
    point = new int[dimension];
    point[0] = num1;
    point[1] = num2;

}
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
coordinates::coordinates(const coordinates& rhs) {
    dimension = rhs.dimension;
    point = new int[dimension];
    for (int i = 0; i < dimension; ++i) {
        point[i] = rhs.point[i];
    }

}
void coordinates::swap(coordinates& rhs) {
    
    int* tempPoint = point;
    point = rhs.point;
    rhs.point = tempPoint;
    
    int tempDim = dimension;
    dimension = rhs.dimension;
    rhs.dimension = dimension;
}

int& coordinates::operator[] (int num) {
    return point[num];
}

coordinates& coordinates::operator= (coordinates rhs) {
    swap(rhs);
}

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