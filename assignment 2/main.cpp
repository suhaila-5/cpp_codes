#include <iostream>

using namespace std;
/*
 //Q1
int main()
{
    int year;
    cout << "ENTER YEAR " << endl;
    cin>>year;
    if(year%4==0||year%400==0)
        cout<<"laep year"<<endl;
    else
        cout<<"not laep year"<<endl;
    return 0;
}
//Q2
int main()
{
    int g;

        cout<<"enter grade"<<endl;
        cin>>g;

        if (g < 0 || g > 100)
        {
            cout << "Invalid grade input" << endl;
        }
        else if (g <=25)
        {
            cout << "F" << endl;
        }
        else if (g >= 25 && g < 45)
        {
            cout << "E" << endl;
        }
        else if (g >= 45 && g < 50)
        {
            cout << "D" << endl;
        }
        else if (g >= 50 && g < 60)
        {
            cout << "C" << endl;
        }
        else if (g >= 60 && g < 80)
        {
            cout << "B" << endl;
        }
        else if (g >= 80 && g <= 100)
        {
            cout << "A" << endl;
        }


    return 0;
}


//Q3

int main()
{

    char c;
    cout << "enter a character" << endl;
    cin>>c;

    if(c=='a'||c=='o'||c=='e'||c=='u'||c=='i')
    {
        cout<<"vowel"<<endl;
    }
    else
    {
        cout<<" not vowel"<<endl;
    }
    return 0;
}

//Q4

int main()
{
    int x,y,z;
     int max = x;
    int min = x;
    cout << "enter 3 no." << endl;
    cin>>x>>y>>z;


    if (y > max) {
        max = y;
    }
    if (z > max) {
        max = z;
    }

    if (y < min) {
        min = y;
    }
    if (z < min) {
        min = z;
    }

    cout << max << " is the max" << endl;
    cout << min << " is the min" << endl;



    return 0;
}

//Q5

int main()
{
    int i;
    for (i=10;i>=1;i--){
            if (i==9)
            {
                 continue;
            }

            cout << i << endl;

        }

    return 0;
}

// Q6
int main()
{
    int n, sum =0,i;
    float avr;

    for (i=0;i<10;i++)
    {
         cout << "enter number" << endl;
         cin>>n;
         sum=sum+n;

    }

    avr=sum/10.0;
    cout<<"avrage is "<<avr;


    return 0;
}
 //Q7

int main()
{
    int n,i;
    cout << "enter number" << endl;
    cin>>n;
    for(i=1;i<=12;i++)
    {
        cout<<i<<"*"<<n<<"="<<i*n<<endl;
    }
    return 0;
}

//Q8

int main()
{
     int s,e,i,sum=0;
    cout << "enter start number" << endl;
    cin>>s;
    cout << "enter end number" << endl;
    cin>>e;
    for(s;s<=e;s++)
    {
        sum=sum+;
    }
    cout<<"sum = "<<sum<<endl;

    return 0;
}
//Q9

int main()
{
   int base, exponent,result =1;


    cout << "Input base: ";
    cin >> base;
    cout << "Input exponent: ";
    cin >> exponent;


    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }

    cout << base << "^" << exponent << " = " << result << endl;

    return 0;

}
//Q10

int main()
{
    int i,n,c=0;
    for(i=1;i<=10;i++)
    {
       cout << "enter number" << endl;
       cin>>n;
       if(n%2!=0)
       {
           c=c+1;
       }
    }
     cout << " number of odd numbers is "<< c << endl;

    return 0;
}


//Q11

int main()
{
    int x,y,r;
    cout << "enter the 2 numbers " << endl;
    cin>>x>>y;
    if (x>y)
    {
    while (y!= 0) {
        r = y;
        y = x% y;
        x = r ;
    }
    cout<<"gcd is "<<x;

    }
    else
    {
        while (x!= 0) {
        r = x;
        x = y% x;
        y= r ;
    }
    cout<<"gcd is "<<y;
    }
    return 0;
}

//Q12

int main()
{
 // don't know the answer

}

//Q13
int main()
{
    int e=0,o=0,p=0,n=0,i,x,y;

    cout<<"enter number of input items "<<endl;
    cin>>x;

    for (i=0;i<=x;i++)
    {
        cout<<"enter the number"<<endl;
        cin>>y;
        if(y>0)
        {
            p++;
        }
        else if(y<0)
        {

            n++;
        }
        if (y%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }

    cout<<" odd : "<<o<<endl;
    cout<<" even : "<<e<<endl;
    cout<<" positiv : "<<p<<endl;
    cout<<" negative : "<<n<<endl;




    return 0;
}

*/

//Q 14

int main {



// don't know the answer




return 0;

}

