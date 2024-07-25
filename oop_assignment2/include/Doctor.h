#ifndef DOCTOR_H
#define DOCTOR_H
#include <iostream>
#include <string>
#include <person.h>
using namespace std;


class Doctor : public person
{
    public:
        Doctor (string fn , string ln,string speciality)
        {
            this->firstName=fn;
            this->lastName=ln;
            this->speciality=speciality;
        }
        string getSpeciality()
        {
            return speciality ;
        }
        void setSpeciality (string speciality)
        {
            this->speciality = speciality;
        }

    protected:
        string speciality ;

};

#endif // DOCTOR_H
