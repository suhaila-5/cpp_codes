#include <iostream>
#include <string>
using namespace std;


/*
#include <circle.h>
#include <cylinder.h>

int main() {
    circle circle1; // Default constructor
    circle circle2(5.0); // Constructor with radius
    circle circle3(3.0, "red"); // Constructor with radius and color

    cout << "Circle 1:" << endl;
    circle1.display_info();

    cout << "\nCircle 2:" << endl;
    circle2.display_info();

    cout << "\nCircle 3:" << endl;
    circle3.display_info();

    // Modifying circle3
    circle3.setradius(4.0);
    circle3.setcolor("green");

    cout << "\nUpdated Circle 3:" << endl;
    circle3.display_info();

    return 0;
}
*/
/*




int main() {
    cylinder cylinder1; // Default constructor
    cylinder cylinder2(5.0); // Constructor with radius

    cylinder cylinder4(5.0, 10.0, "red");

    cout << "Cylinder 1 Information:" << endl;
    cylinder1.display_info();

    cout << "\nCylinder 2 Information:" << endl;
    cylinder2.display_info();

    cout << "\nCylinder 3 Information:" << endl;
    cylinder4.display_info();

    return 0;
}
*/
/*
#include <customer .h>
#include <invoice.h>
int main() {

    customer customer1(1, "John Doe", 10);
    invoice invoice(1001, customer1, 500.0);

    invoice.display();



    return 0;
}
*/
/*



#include <person.h>
#include <Date.h>
#include <Doctor.h>
#include <patient.h>

int main() {
    // Creating a doctor
    Doctor doc("John", "Doe", "Cardiology");

    // Creating dates
    Date dob(1, 15, 1990);
    Date admitDate(7, 20, 2023);
    Date dischargeDate(7, 25, 2023);

    // Creating a patient
    patient patient(1, 33, dob, admitDate, dischargeDate, &doc);

    // Display patient information
    patient.display_info();

    return 0;
}
*/

/*
Composition involves one class containing an object of another class as a member "has a "

#include <iostream>
#include <string>

// Heart class representing a human organ
class Heart {
private:
    int heartRate;

public:
    Heart(int rate) : heartRate(rate) {}
    // Methods related to heart functionality
};

// Human class composed of Heart
class Human {
private:
    std::string name;
    Heart heart; // Composition of Heart class

public:
    Human(std::string name, int heartRate)
        : name(name), heart(heartRate) {}
    // Methods and functionality related to Human
};


Inheritance involves creating a new class (derived class) from an existing class (base class), inheriting its attributes and methods "is a"

#include <iostream>
#include <string>

// Human class as base class
class Human {
protected:
    std::string name;

public:
    Human(std::string name) : name(name) {}
    virtual void speak() = 0; // Pure virtual function
    // Other methods related to Human
};

// Man class inherits from Human
class Man : public Human {
private:
    int age;

public:
    Man(std::string name, int age) : Human(name), age(age) {}
    void speak() override {
        std::cout << "Hello, I'm a man." << std::endl;
    }
    // Other methods and attributes specific to Man
};
*/

