// Simple Coordinates Class for 2 and 3 dimensional Graphs
// Dylan Sarell
// 4/28/23

// In C++ when using Dynanmic memory especially your have to
// have mulitple constructors and for all the different forms
// of your objects. You also need methods like a Copy Constructor,
// Destructor, swap, and Overloaded assignment to take full advantage
// of the Dynamic Memory Allocation. 

// There are also public and Private keywords to Seperate the varaibles
// (Atributes) and the methods (functions).


#ifndef coordinates_HPP
#define coordinates_HPP

#include<iostream>

class coordinates {
    public:
    // Constructors
        coordinates(); 
        coordinates(int, int); 
        coordinates(int, int, int);
        coordinates(const coordinates&); // Copy Constructor
        ~coordinates(); // Destructor
        void swap(coordinates&); // Swap
        coordinates& operator= (coordinates); // Overloaded Assignment
        int& operator[] (int); // Overloaded Index operator.
        friend std::ostream& operator<< (std::ostream& output, coordinates& rhs); // Overloaded output operator.
        int getdimension() {return dimension;};
        coordinates& operator+ (const coordinates& rhs);

    private:
        int *point;
        int dimension;
};
#endif