#ifndef PATIENT_H
#define PATIENT_H
#include <iostream>
#include <string>
#include <Doctor.h>
#include <Date.h>
using namespace std;


class patient
{
public:
    patient(int pID,int a ,Date dob ,Date admit ,Date discharge ,Doctor* doc )
    {
        patientId = pID;
        age=a;
        this->dob=dob;
        admitDate=admit;
        dischargeDate=discharge;
        physician=doc;

    }
    void setDischargeDate(Date dischargeDate)
    {
        this->dischargeDate = dischargeDate;
    }

    Date getDischargeDate()
    {
        return dischargeDate;
    }


    void setPhysician(Doctor* physician)
    {
        this->physician = physician;
    }

    Doctor* getPhysician()
    {
        return physician;
    }
    void display_info()
    {
        cout << "Patient ID: " << patientId << endl;
        cout << "Age: " << age << endl;
        cout << "Date of Birth: " << dob.toString() << endl;
        cout << "Admit Date: " << admitDate.toString() << endl;
        cout << "Discharge Date: " << dischargeDate.toString() << endl;
        cout << "Physician: " << physician->getfirstName() << " " << physician->getlastName() << endl;
        cout << "Speciality: " << physician->getSpeciality() << endl;
    }


    protected:
    int patientId;
    int age;
    Date dob;
    Date admitDate;
    Date dischargeDate;
    Doctor* physician;

};

#endif // PATIENT_H
