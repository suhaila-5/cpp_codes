#include <iostream>

using namespace std;
/*
//Q1
class circle
{
   private :
       double radius = 0 ;
       string color = "/n";
       double area=0;
   public :
       double getRadius()
       {
           return radius;

       }
       string getColor()
       {
           return color;
       }


       double getarea()
       {
           area =3.14*radius*radius;
           return area;
       }

       void setRadius(double r)
        {
            radius=r;
        }
        void setColor(string c)
        {
            color=c;
        }




    circle ()
    {
       radius=0;
       color="/n" ;

    }
    circle (double r)
    {
       radius=r;
       color="/n" ;

    }
    circle (double r,string c)
    {
       radius=r;
       color=c ;

    }


};

int main()
{

    circle c1;
    circle c2(5.0);
    circle c3(10.0, "red");
    cout << "Circle 1: Radius = " << c1.getRadius() << ", Color = " << c1.getColor()<<" , area ="<<c1.getarea()<< endl;
    cout << "Circle 2: Radius = " << c2.getRadius() << ", Color = " << c2.getColor() <<",  area ="<<c2.getarea()<< endl;
    cout << "Circle 3: Radius = " << c3.getRadius() << ", Color = " << c3.getColor() <<"  , area = "<<c3.getarea()<< endl;
    return 0;
}
*/

/*
class Employee
{
    private:
    int id;
    string firstName;
    string lastName;
    int salary;

    public:
        int getid()
        {
            return id;
        }
        int getsalary ()
        {
            return salary;
        }
        string getFirstName ()
        {
            return firstName;
        }
         string getLastName ()
        {
            return lastName;
        }
         string getName ()
        {

            return firstName+lastName;
        }
        int getAnnualSalary()
        {
            return salary*12;
        }
        void setsalary(int s)
        {
            salary=s;
        }
        int raiseSalary(int p)
        {
           return salary+(p/100)*salary ;
        }

       Employee(int empId, string fName, string lName, int sal)
        {
            id = empId;
            firstName = fName;
            lastName = lName;
            salary = sal;
        }




};
int main() {

    Employee emp1(1, "John", "Doe", 5000);
    Employee emp2(2, "Jane", "Smith", 6000);

    cout << "Employee 1 Details:" << endl;
    cout << "ID: " << emp1.getid() << endl;
    cout << "Name: " << emp1.getName() << endl;
    cout << "Salary: $" << emp1.getsalary() << endl;
    cout << "Annual Salary: $" << emp1.getAnnualSalary() << endl;

    cout << "\nEmployee 2 Details:" << endl;
    cout << "ID: " << emp2.getid() << endl;
    cout << "Name: " << emp2.getName() << endl;
    cout << "Salary: $" << emp2.getsalary() << endl;
    cout << "Annual Salary: $" << emp2.getAnnualSalary() << endl;

    return 0;
}
*/
/*
class Account
{
private:
    string id ;
    string name ;
    int balance ;
public:
    string getid()
    {
        return id;
    }
    string getname()
    {
        return name;
    }
    int getbalance()
    {
        return balance;
    }
    int credit(int m)
    {
        balance+=m;
        return balance;
    }
    int debit (int m)
    {
        if (m<= balance)
            {
                balance-=m;
                return balance;
            }
        else
        {
            return 0;
        }
    }
    int transeferTo(Account another,int m)
    {
        if (m<= balance)
            {
                balance-=m;
                cout<<"done"<<endl;
                return balance;
            }
        else
        {
            cout<<"amount exceeded balance"<<endl;
            return balance;
        }
    }

 Account(string accountId, string accountName) {
        id = accountId;
        name = accountName;
        balance = 0;
    }


    Account(string accountId, string accountName, int initialBalance) {
        id = accountId;
        name = accountName;
        balance = initialBalance;
    }


};

int main() {

    Account acc1("A001", "John Doe");
    Account acc2("A002", "Jane Smith", 3000);

    cout << "Account 1 Details:" << endl;
    cout << "ID: " << acc1.getid() << endl;
    cout << "Name: " << acc1.getname() << endl;
    cout << "Balance: $" << acc1.getbalance() << endl << endl;

    cout << "Account 2 Details:" << endl;
    cout << "ID: " << acc2.getid() << endl;
    cout << "Name: " << acc2.getname() << endl;
    cout << "Balance: $" << acc2.getbalance() << endl << endl;

    acc1.credit(1000);
    cout << "After crediting $1000 to Account 1:" << endl;
    cout << "Balance: $" << acc1.getbalance() << endl << endl;

    acc2.debit(500);
    cout << "After debiting $500 from Account 2:" << endl;
    cout << "Balance: $" << acc2.getbalance() << endl << endl;

    acc1.transeferTo(acc2, 2000);
    cout << "After transferring $2000 from Account 1 to Account 2:" << endl;
    cout << "Account 1 Balance: $" << acc1.getbalance() << endl;
    cout << "Account 2 Balance: $" << acc2.getbalance() << endl << endl;

    acc1.transeferTo(acc2, 200);
    cout << "After transferring $2000 from Account 1 to Account 2:" << endl;
    cout << "Account 1 Balance: $" << acc1.getbalance() << endl;
    cout << "Account 2 Balance: $" << acc2.getbalance() << endl << endl;

    return 0;
}
*/

/*
class time
{
private:
    int hour ;
    int minute ;
    int second ;

public:

    time(int h = 0, int m = 0, int s = 0) {
        settime(h, m, s);
    }

    int gethour()
    {
        return hour;
    }
    int getminute()
    {
        return minute;
    }
    int getsecond ()
    {
        return second ;
    }


    void sethour (int h)
    {
        hour=h;
    }
    void setminute(int m)
    {
        minute=m ;
    }
    void setsecond (int s)
    {
        second=s ;
    }
    void settime(int h,int m,int s)
    {
        hour=h ;
        minute=m ;
        second=s ;
    }
    time nextsecond ()
    {
        second=second+1 ;
        return second ;
    }
    time previoussecond ()
    {
        second=second-1 ;
        return second ;
    }

};
int main() {

    time t1;
    t1.settime(23, 59, 59);
    cout << "Initial Time: " << t1.gethour() << ":" << t1.getminute() << ":" << t1.getsecond() << endl;


    t1 = t1.nextsecond();
    cout << "After nextSecond: " << t1.gethour() << ":" << t1.getminute() << ":" << t1.getsecond() << endl;

    t1 = t1.previoussecond();
    t1 = t1.previoussecond();
    cout << "After previousSecond twice: " << t1.gethour() << ":" << t1.getminute() << ":" << t1.getsecond() << endl;

    return 0;
}
*/
