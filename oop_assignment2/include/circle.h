#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include <string>

using namespace std;

class circle
{
    public:
       circle()
       {
           radius=0.0;
           color="no color";
       }
       circle(double radius)
       {
          this->radius=radius;
          color="no color";
       }
       circle(double radius,string color)
       {
           this->radius=radius;
           this->color=color;

       }
       double getradius()
       {
           return radius;
       }
       string getcolor ()
       {
           return color;
       }
       void setradius (double radius)
       {
           this->radius=radius;
       }
       void setcolor(string color)
       {
           this->color=color;
       }
       double getarea()
       {
           return radius*radius*3.14;
       }
       void display_info()
       {
           cout<<"radius = "<<radius<<endl;
           cout<<"color = "<<color<<endl;
           cout<<"area = "<<getarea()<<endl;
       }



    protected:
        double radius=1.0;
        string color = "blue";

};

#endif // CIRCLE_H
