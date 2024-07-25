#ifndef CUSTOMER _H
#define CUSTOMER _H

#include <iostream>
#include <string>
using namespace std;

class customer {
public:


      customer() : id(0), name(""), discount(0) {}
      customer(int id, const std::string& name, int discount)
        : id(id), name(name), discount(discount) {}
    int getid() const {
        return id;
    }

    string getname() const {
        return name;
    }

    int getdiscount() const {
        return discount;
    }

    void setdiscount(int discount) {
        this->discount = discount;
    }

    void display() const {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Discount: " << discount << "%" << endl;
    }

protected:
    int id;
    string name;
    int discount;

};

#endif // CUSTOMER _H
