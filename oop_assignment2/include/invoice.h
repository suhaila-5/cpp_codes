#ifndef INVOICE_H
#define INVOICE_H
#include <iostream>
#include <string>
#include <customer .h>
using namespace std;

class invoice : public customer
{
    public:
        invoice(int id,  customer& customer, double amount)
        : id(id), cust(customer), amount(amount) {}
        int getid()
        {
            return id;
        }
        double getamount()
        {
            return amount;
        }
        customer getcustomer ()
        {
            return cust;
        }
        int getcustomerid ()
        {
            return cust.getid();
        }
        string getcustomername ()
        {
            return cust.getname() ;

        }
        int getcustomerdiscount()
        {

            return cust.getdiscount();
        }
        double amountafterdiscount ()
        {
            return amount-(amount*(cust.getdiscount()/100)) ;

        }

        void setcustomer (customer customer)
        {
            this->cust=customer ;
        }
        void setamount(double amount )
        {
            this->amount =amount ;
        }
           void display() {
        cout << "Invoice ID: " <<id << endl;
        cout << "Customer ID: " << getcustomerid() << endl;
        cout << "Customer Name: " << getcustomername() << endl;
        cout << "Customer Discount: " << getcustomerdiscount() << "%" << endl;
        cout << "Original Amount: $" << amount << endl;
        cout << "Amount after Discount: $" << amountafterdiscount()<<endl;
    }




    protected:
        int id ;
        customer cust ;
        double amount ;


};

#endif // INVOICE_H
