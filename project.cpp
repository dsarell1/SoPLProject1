// Dylan Sarell
// 4/11/23
// 

#include <iostream>
#include "project.hpp"

using std::cout; using std::cin; using std::endl;

// Default Constructor
coordinates::coordinates() {
    dimension = 2;
    point = new int[dimension];
    for (int i = 0; i < dimension; i++) {
        point[i] = 0;
    }
}
int& coordinates::operator[] (int num) {
    return point[num];
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