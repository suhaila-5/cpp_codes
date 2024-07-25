#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
using namespace std;


class person
{
    public:
        person ()
        {
            firstName = "no name" ;
            lastName ="no name" ;
        }
        person (string fn ,string ln)
        {
            firstName = fn ;
            lastName =ln ;

        }
        void setName (string fn,string ln)
        {
            this->firstName =fn ;
            this->lastName = ln ;

        }
        string getfirstName ()
        {
            return firstName;
        }
        string getlastName ()
        {
            return lastName ;

        }
        string getfullName ()
        {
            return firstName + " "+ lastName ;
        }
        void display ()
        {
            cout << "first Name is " <<getfirstName() <<endl ;
            cout << "last name is " <<getlastName () <<endl ;
            cout << "full name : " << getfullName()<<endl;

        }

    protected:
        string firstName;
        string lastName ;


};

#endif // PERSON_H
