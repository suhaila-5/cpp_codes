#include <iostream>

using namespace std;

// Q1
/* int main()
{
    int x;
    cout << "enter number :" << endl;
    cin >>x;
    cout << "your number is : "<<x;
    return 0;
}*/

//  Q2
/*  int main()
{
    int x,y,z;
    cout << "enter 3 numbers :" << endl;
    cin >>x;
    cin >>y;
    cin >>z;
    cout << "the sum is : "<<x+y+z;

    return 0;
}*/

//Q3
/*int main()
{
    int x,y,z;
    float avr;
    cout << "enter 3 numbers :" << endl;
    cin >>x;
    cin >>y;
    cin >>z;
     avr=(x+y+z)/3.0;
    cout << "the avrage is : "<<avr;

    return 0;
} */
// use a varible for the avrg
// dont use casting
//Q4

/*
int main()
{
    int h,w;
    float p,a;
    cout << "enter the Height  :" << endl;
    cin >>h;
    cout << "enter the Width  :" << endl;
    cin >>w;

    p=float(h+w)*2;
    a=float(h*w);

    cout << "the area is : "<<a<<endl;
    cout << "the perimeter is : "<<p;
    return 0;
} */
//Q5
/*int main()
{
    int x,sum=0;
    cout << "enter number of 3 integrs :" << endl;
    cin >>x;
    do{
    sum = sum +x %10 ;
    x=x/10;
    }while(x%10!=0);
    cout << "the sum is : "<<sum<<endl;
    return 0;
}*/

/*int main()
{
    int x,sum=0;
    cout << "enter number of 3 integrs :" << endl;
    cin >>x;

    sum= sum +x %10 ;
    x=x/10;

    sum= sum +x %10 ;
    x=x/10;

    sum= sum +x %10 ;
    x=x/10;

    cout << "the sum is : "<<sum<<endl;
    return 0;
}*/





//Q6
/*
int main()
{
    int s,h,m;
    cout << "enter number of seconds :" << endl;
    cin >>s;
    h=s/(60*60);
    s=s%(60*60);
    m=s/60;
    s=s%60;

   cout << "the h:m:s is : "<<h<<":"<<m<<":"<<s;

    return 0;
}*/

//Q7
/*
int main()
{
    int x;
    cout << "enter your number :" << endl;
    cin >>x;
    if(x>0){cout<<"positive";}
    else if (x<0){cout<<"negative";}
    else{cout<<"nutra";}


    return 0;
}*/
//Q8
/*int main()
{
    int x;
    cout << "enter your number :" << endl;
    cin >>x;
    if(x==1){cout<<"one";}
    else if (x==2){cout<<"two";}
    else if (x==3){cout<<"three";}
    else if (x==4){cout<<"four";}
    else if (x==5){cout<<"five";}
    else{cout<<"Out of range ";}


    return 0;
}*/
//Q9

/*int main()
{
    int x,y,z,w,l,sum=0;

    cout << "enter your number :" << endl;
    cin >>x;
    cout << "enter your number :" << endl;
    cin >>y;
    cout << "enter your number :" << endl;
    cin >>z;
    cout << "enter your number :" << endl;
    cin >>w;
    cout << "enter your number :" << endl;
    cin >>l;
    if(x%2!=0){sum=sum+x;}

    if(y%2!=0){sum=sum+y;}

    if(z%2!=0){sum=sum+z;}

    if(w%2!=0){sum=sum+w;}

    if(l%2!=0){sum=sum+l;}


    cout<<"sum is "<<sum;

    return 0;
}*/
//Q10
/*
int main()
{
    int BY,CY=2024;

    cout << "enter your birth year:" << endl;
    cin >>BY;
    if(CY-BY>=18){cout<<"18 or above";}
    else{cout<<"under 18 ";}

    return 0;
}*/
//Q11

/*int main()
{
    int x;

    cout << "enter month number:" << endl;
    cin >>x;

    switch (x<5){
        case 1:
            cout << "January";
            break;
        case 2:
           cout << "February";
            break;
        case 3:
            cout << "March";
            break;
        case 4:
            cout << "April";
            break;
        case 5:
            cout <<"May";
            break;
        case 6:
           cout << "June";
            break;
        case 7:
            cout << "July";
            break;
        case 8:
            cout << "August";
            break;
        case 9:
            cout << "September";
            break;
        case 10:
           cout << "October";
            break;
        case 11:
            cout << "November";
            break;
        case 12:
            cout << "December";
            break;
        default:
            cout << "Invalid month number!";
    }


    return 0;
}*/
//Q12
/*int main()
{
    int x;

    cout << "enter your number :" << endl;
    cin >>x;
    (x%2==0)? cout<<"your number is even" : cout<<"your number is odd";

    return 0;
}
*/
