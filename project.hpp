#ifndef PROJECT_HPP
#define PROJECT_HPP

#include<iostream>

class coordinates {
    public:
        coordinates(); 
        //coordinates(int num1, int num2) : x(num1), y(num2) {}; 
        //coordinates(const coordinates&);
        //~coordinates();
        //void swap(coordinates&);
        //coordinates& operator= (coordinates);
        int& operator[] (int);
        friend std::ostream& operator<< (std::ostream& output, coordinates& rhs);
        int getdimension() {return dimension;};
        //int gety() {return y;};

    private:
        int *point;
        int dimension;
        //int x; 
        //int y;
};
#endif