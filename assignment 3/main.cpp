#include <iostream>

using namespace std;


// Q1
/*int main()
{
    int sum=0,x;
     while(x>0){
         cout << "enter your number " << endl;
         cin >>x;
        sum=sum+x;
    }
    cout<<"the sum = "<<sum ;

    return 0;

}



//Q2

int main()
{ int x, max=0;

     while(x>=0){
         cout << "enter your number " << endl;
         cin >>x;
         if(x>max)
         {
             max=x;
         }
    }
     cout<<"max is "<<max;
return 0;

//Q3
int main()
{
    int count=0,x;
    cout << "enter your number " << endl;
    cin >>x;
    while (x!=0){


        if(x%2!=0)
        {
            x=x-1;


        }
        else
        {
            x=x/2;

        }
          count++;
    }

    cout<<"number of oprations = "<<count;


    return 0;
}
}
//Q4
int main()
{
    int max[2],x,i;
     max[0] = max[1] = -2147483648;


    for(i=0;i<10;i++)
    {
        cout << "enter your number " << endl;
        cin >>x;

        if(x>max[0]){
            max[1]=max[0];
            max[0]=x;
        }

    }
    cout << "2nd max is"<<max[1]<< endl;
        cin >>x;



    return 0;
}

//////////////////////////////////////////////////////////////
int main()
{
    int max[10],x,i;


    for(i=0;i<10;i++)
    {
        cout << "enter your number " << endl;
        cin >>max[i];

    }

   for (int i = 0; i <9; ++i) {
        for (int j = i + 1; j < 10; ++j) {
            if (max[i] > max[j]) {

                x =max[i];
                max[i] = max[j];
                max[j] = x;
            }
        }
    }


    cout << "2nd max is"<<max[8]<< endl;
        cin >>x;

    return 0;
}

// Q5
int main()
{
    int x,i,j;
    cout << "enter your number " << endl;
        cin >>x;
        cout<<"output"<<endl;


    for(i=1;i<=x;i++)
    {
        for(j=1;j<=i;j++)
    {
        cout<<i;

    }
     cout<<endl;
    }


    return 0;

}




// Q6
int main()
{
    int x,i,j;
    cout << "enter your number " << endl;
        cin >>x;
        cout<<"output"<<endl;


   for ( i = 1; i <= x; ++i) {
        for (j = 1; j <= i; ++j) {
            if (j == 1 || j == i || i == x) {
                cout << "* ";
            } else {
                cout << "  "; // Print spaces for hollow part
            }
        }
        cout << endl;
    }

    return 0;

}


// Q7
int main()
{
    int x,r,c;
    cout << "enter your number " << endl;
        cin >>x;
        cout<<"output"<<endl;


   for ( r = x; r>=1;r--) {
        for (c = 1; c <=r;c++) {
           cout << "* ";
        }
        cout << endl;
    }

    return 0;

}




// Q8
int main()
{









    return 0;

}
  // Q9
int main()
{
   int n,i,e,o;
   e=o=0;
   cout<<"enter number of elements"<<endl;
   cin>>n;
   int arr[n];
   for(i=0;i<n;i++)
   {
       cout<<"enter your number"<<endl;
       cin>>arr[i];
       if(arr[i]%2==0)
       {
           e=e+1;
       }
       else
       {
           o=o+1;
       }

   }
   cout <<"even inputs ="<<e<<endl;
   cout <<"odd inputs ="<<o;

    return 0;

}



// Q10
int main()
{
    int n,i,x,r=-1;

   cout<<"enter number of elements"<<endl;
   cin>>n;
   int arr[n];
   for(i=0;i<n;i++)
   {
       cout<<"enter your number"<<endl;
       cin>>arr[i];

   }

   cout<<"enter element to find"<<endl;
   cin>>x;

   for(i=0;i<n;i++)
   {
       if(arr[i]==x)
       {
           r=i;
            break;
       }
       else
       {
           r=-1;
       }

   }

   if(r!=-1)
   {
       cout<<"Element found at index "<<r<<endl;
   }
   else
   {
       cout<<"Element not found "<<endl;
   }

    return 0;

}


// Q11
int main()
{

    int n,i,x,c=0;

   cout<<"enter number of elements"<<endl;
   cin>>n;
   int arr[n];
   for(i=0;i<n;i++)
   {
       cout<<"enter your numbers "<<endl;
       cin>>arr[i];


   }
    cout<<"////////////////////////////////////////////////////////////////////////"<<endl;

    cout<<"enter element to find occurrences"<<endl;
    cin>>x;


   for(i=0;i<n;i++)
   {
       if(arr[i]==x)
       {
           c=c+1;
       }

   }


       cout<<"Number of occurrences of "<< x <<" = " << c <<endl;

    return 0;

}

// Q12
int main()
{
    int n,i;

   cout<<"enter number of elements"<<endl;
   cin>>n;
   int arr[n],arr2[n];
   for(i=0;i<n;i++)
   {
       cout<<"enter your numbers "<<endl;
       cin>>arr[i];
   }
      for(i=0;i<n;i++)
   {
         arr2[i]=arr[i];


   }
   cout<<"array 1 :"<<endl;
   for(i=0;i<n;i++)
   {
       cout<<arr[i] <<" ";

   }

   cout<<endl<<"array 2 :"<<endl;
   for(i=0;i<n;i++)
   {
       cout<<arr2[i] <<" ";

   }


    return 0;

}

// Q13
int main()
{
    int x,i,j,s;
    cout << "enter your number " << endl;
    cin >>x;
    cout<<"output"<<endl;


    for ( i = 1; i <= x; ++i)
    {

        for (s=0; s<x-i; s++)
        {
            cout<<" ";
        }

        for (j = 1; j <= i; ++j)
        {

            cout << " *";
        }
        cout << endl;


    }

    return 0;

}


// Q14
int main()
{
    int x,i,j,s;
    cout << "enter your number " << endl;
    cin >>x;
    cout<<"output"<<endl;


    for ( i = 1; i <= x; ++i)
    {

        for (s=0; s<x-i; s++)
        {
            cout<<" ";
        }

        for (j = 1; j <= x; ++j)
        {

            cout << " *";
        }
        cout << endl;


    }

    return 0;

}

// Q15
int main()
{
    int x,i,j,s;
    cout << "enter your number " << endl;
    cin >>x;
    cout<<"output"<<endl;


    for ( i = 1; i<=x; ++i)
    {

        for (s=0; s<x-i; s++)
        {
            cout<<" ";
        }

        for (j = 1; j <=(2*i-1); j++)
        {

            cout << "*";

        }
        cout << endl;
    }
    for ( i = x; i>=1; i--)
    {

        for (s=0; s<x-i; s++)
        {
            cout<<" ";
        }

        for (j = 1; j <=(2*i-1); j++)
        {

            cout << "*";

        }
        cout << endl;
    }

    return 0;

}


// Q16
int main()
{
    int n,a,b,i,sum=0,d,temp,x;

    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"enter a"<<endl;
    cin>>a;
    cout<<"enter b"<<endl;
    cin>>b;


    for(i=1;i<=n;i++)
    {
        temp=i;
        x=0;
            while(temp!=0)
            {
                d=temp%10;
                x=x+d;
                temp=temp/10;

            }
            if(a<=x&&x<=b)
            {
                sum=sum+i;
            }
        }

    cout<<"sum = "<<sum <<endl;

    return 0;

}
*/

