#include <iostream>

using namespace std;

//Q1
// in if the condition is any expression that results in a boolean value and work with all types of variabels but switch take single char or int
// in if it only execute the block of code that achieves the condition but in switch case if there is no  break at end of each case it will execute this case and all the following until there is break ;
void q1 (int x)
{

    if (x == 1)
    {
        cout << "x is 1" << endl;
    }
    else if (x == 10)
    {
        cout << "x is 10" << endl;
    }
    else
    {
        cout << "x is neither 1 nor 10" << endl;
    }

    switch (x)
    {
    case 1:
        cout << "Case 1" << endl;
    // No break, so it will fall through
    case 2:
        cout << "Case 2" << endl;
    // No break, so it will fall through
    case 3:
        cout << "Case 3" << endl;
        break;
    default:
        cout << "Default case" << endl;
        break;
    }

}

//Q2
//do while execute then check the condition but for check then execute
void q2()
{
    int i=1;
    cout <<"do while  loop exampel :"<<endl;
    do
    {
        cout << "x is " << i << endl;
        i++;
    }
    while (i <1);

    cout <<"for loop exampel :"<<endl;

    for (i ; i < 5; i++)
    {
        cout << "i is " << i << endl;
    }

}

//Q3
//int , char , boolean , float ,long ,double ,short.

//Q4

double q4(int arr[], int x)
{
    double average = 0;
    double sum = 0;
    int i = 0;

    while (i < x)
    {
        sum += arr[i];
        i++;
    }

    average = sum / x;
    return average;
}

int q5(int x,int y,int z)
{
    if (x>y && x>z)
    {
        return x;
    }
    else if (y>x && y>z)
    {
        return y;
    }
    else if (z>y && z>x)
    {
        return z;
    }
    else
    {
        return 0;
    }
}
void q6 (int *x, int *y)
{
    int temp ;
    temp=*x;
    *x=*y;
    *y=temp;

}
//q7
//the problem is in the rang of condition of first loop and the second loop is reversed
void q7()
{

    for (int i=1; i<=5; i++)
    {
        for (int j=1; j<=5; j++)
        {
            if (i==j)
            {
                cout<< i<< " "<<j<<endl;
            }

        }
    }
}
/*
//Q8
*
**
* *
*  *
*****
*/

int main()
{
    //int arr[6]={1,2,3,4,5,6};
    int x,y ;
    // q1(2);
    // q2();
    //cout<<q4(arr,6)<<endl;
    /*if (q5(5,9,1)!=0)
    {
        cout<<"max is : "<<q5(5,9,1)<<endl;
    }
    else
    {
        cout <<"no max value"<<endl;
    }*/


    /*
    //q6
    x=1;
    y=5;
    cout <<"values before "<<x<<","<<y<<endl;
    q6(&x,&y);
    cout<<"valuse after "<<x<<","<<y<<endl;
    */

    //q7();


    return 0;
}
