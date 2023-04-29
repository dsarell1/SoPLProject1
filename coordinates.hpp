// Simple Coordinates Class for 2 and 3 dimensional Graphs
// Dylan Sarell
// 4/28/23

#ifndef coordinates_HPP
#define coordinates_HPP

#include<iostream>

class coordinates {
    public:
        coordinates(); 
        coordinates(int, int); 
        coordinates(int, int, int);
        coordinates(const coordinates&); // Copy Constructor
        ~coordinates(); // Destructor
        void swap(coordinates&); // Swap
        coordinates& operator= (coordinates); // Overloaded Assignment
        int& operator[] (int); // Overloaded Index operator.
        friend std::ostream& operator<< (std::ostream& output, coordinates& rhs); 
        int getdimension() {return dimension;};

    private:
        int *point;
        int dimension;
};
#endif