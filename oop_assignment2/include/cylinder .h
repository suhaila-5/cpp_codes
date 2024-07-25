#ifndef CYLINDER _H
#define CYLINDER _H
#include <circle.h>
#include <iostream>
#include <string>


using namespace std;

class cylinder :public circle
{
    public:
    Cylinder()
    {
        Circle(1.0);
        height(1.0);
    }



    Cylinder(double radius) : Circle(radius), height(1.0) {}


    Cylinder(double radius, double height) : Circle(radius), height(height) {}
    cylinder(double radius, double height) : Circle(radius), height(height) {}

    double getHeight() {
        return height;
    }

    void setHeight(double height) {
        this->height = height;
    }

    double getVolume() {
        return getArea() * height;
    }

    void display_info() {
        Circle::display_info();
        cout << "Height = " << height << endl;
        cout << "Volume = " << getVolume() << endl;
    }


    protected:
        double height=1.0;


};

#endif // CYLINDER _H
