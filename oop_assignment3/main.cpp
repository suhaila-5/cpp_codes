#include <iostream>
#include <string>

using namespace std;

class Vehicle
{
protected:
    string model;
    string registrationNumber ;
    int speed;
    double capacity ;
    double consumption ;
public:

    Vehicle(string model,string registrationNumber,int speed,double capacity,double consumption)
    {
        this->model=model;
        this->registrationNumber = registrationNumber;
        this->speed = speed;
        this->capacity = capacity;
        this->consumption = consumption;
    }

    string getModel()
    {
        return model;
    }
    string getRegistrationNumber()
    {
        return registrationNumber;
    }
    int getSpeed()
    {
        return speed;
    }
    double getCapacity()
    {
        return capacity;
    }
    double getConsumption()
    {
        return consumption;
    }
    void setModel( string& newModel)
    {
        model = newModel;
    }
    void setRegistrationNumber( string& newRegistrationNumber)
    {
        registrationNumber = newRegistrationNumber;
    }
    void setSpeed(int newSpeed)
    {
        speed = newSpeed;
    }
    void setCapacity(double newCapacity)
    {
        capacity = newCapacity;
    }
    void setConsumption(double newConsumption)
    {
        consumption = newConsumption;
    }
    virtual void display ()
    {
        cout<< model<<endl;
        cout<< registrationNumber<<endl ;
        cout<< speed<<endl;
        cout<< capacity <<endl;
        cout<< consumption<<endl ;
    }

};
class truck :public Vehicle
{
protected:
    double cargoWeightLimit;
public:
    truck(string model, string registrationNumber, int speed, double capacity, double consumption, double cargoWeightLimit)
        : Vehicle(model, registrationNumber, speed, capacity, consumption)
    {

    }

    double getCargoWeightLimit()
    {
        return cargoWeightLimit;
    }

    void setCargoWeightLimit(double newCargoWeightLimit)
    {
        cargoWeightLimit = newCargoWeightLimit;
    }

    void display() override
    {
        cout << "Model: " << getModel() << endl;
        cout << "Registration Number: " << getRegistrationNumber() << endl;
        cout << "Speed: " << getSpeed() << " km/h" << endl;
        cout << "Capacity: " << getCapacity() << " liters" << endl;
        cout << "Consumption: " << getConsumption() << " L/100km" << endl;
        cout << "Cargo Weight Limit: " << getCargoWeightLimit() << " kg" << endl;
    }


};


class Bus : public Vehicle
{
protected:
    int numPassengers;

public:

    Bus(string model, string registrationNumber, int speed, double capacity, double consumption, int numPassengers)
        : Vehicle(model, registrationNumber, speed, capacity, consumption)
    {
        this->numPassengers = numPassengers;
    }


    int getNumPassengers()
    {
        return numPassengers;
    }


    void setNumPassengers(int newNumPassengers)
    {
        numPassengers = newNumPassengers;
    }


    void display()  override
    {
        cout << "Model: " << getModel() << endl;
        cout << "Registration Number: " << getRegistrationNumber() << endl;
        cout << "Speed: " << getSpeed() << " km/h" << endl;
        cout << "Capacity: " << getCapacity() << " liters" << endl;
        cout << "Consumption: " << getConsumption() << " L/100km" << endl;
        cout << "Number of Passengers: " << getNumPassengers() << endl;
    }
};



template <typename t>
t task1(t a, t b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }

}
template <typename random>
void swap1(random* x,random* y)
{
    random temp;
    temp=*x;
    *x=*y;
    *y=temp;

}

int main()
{
   /* cout <<task1(1,10)<< endl;
    string x="ibrahim";
    string y="suhaila";

    swap1(&x,&y);
    cout <<x<<" "<<y<<endl;
    */
    truck myTruck("Volvo FH", "ABC 1234", 90, 300.0, 25.0, 20000);
    myTruck.display();

    cout << endl;


    Bus myBus("Mercedes-Benz", "DEF 5678", 80, 200.0, 20.0, 50);
    myBus.display();



return 0;
}
