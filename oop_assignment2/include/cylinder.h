#ifndef CYLINDER _H
#define CYLINDER _H
#include <circle.h>
#include <iostream>
#include <string>


using namespace std;

class cylinder :public circle
{
    public:
   cylinder() : circle(1.0,"no color"), height(1.0) {}


    cylinder(double radius) : circle(radius,"no color"), height(1.0) {}


    cylinder(double radius, double height,string color) : circle(radius,color), height(height) {}

    double getHeight() {
        return height;
    }

    void setHeight(double height) {
        this->height = height;
    }

    double getVolume() {
        return getarea() * height;
    }

    void display_info() {
        circle::display_info();
        cout << "Height = " << height << endl;
        cout << "Volume = " << getVolume() << endl;
    }


    protected:
        double height=1.0;


};

#endif // CYLINDER _H
