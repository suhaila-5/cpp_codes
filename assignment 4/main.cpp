#include <iostream>

using namespace std;


/*
//Q1
int main()
{
    int arr [10]={0};
    int i ,sum =0;

    cout<<"enter numbers up 10 numbers "<<endl;
    for(i=0;i<10;i++)
    {

        cin>>arr[i];
        sum=sum+arr[i];
    }
    (sum%2==0)?cout<<"even"<<endl:cout<<"odd"<<endl;


    return 0;
}

//Q2
int main()
{
    int arr [10]={0};
    int i ,r;

    cout<<"enter numbers up 10 numbers "<<endl;
    for(i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<10;i++)
    {
        cout <<arr[i]<<" ";
    }

     cout <<endl;
     for(i=0;i<10;i++)
    {

        r=arr[i]*(-1);
        cout<<r <<" ";
    }

    return 0;
}


//Q3
int main()
{
    int arr [10]={0};
    int i ;

    cout<<"enter numbers up 10 numbers "<<endl;
    for(i=0;i<10;i++)
    {

        cin>>arr[i];
        arr[i]=2*arr[i];
    }
    for(i=0;i<10;i++)
    {

        cout<<arr[i]<<" ";
    }



    return 0;
}

//Q4
int main()
{

    int n,i,j,sum=0;
    cout<<"enter number of matrix"<<endl;
     cin>>n;
     int arr[n][n];

    cout<<"enter numbers "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        cin>>arr[i][j];
        }

    }
    for (i = 0; i < n; i++)
    {
        sum += arr[i][i];
    }
    cout<<"main diagonal sum is : "<<sum<<endl;



    return 0;
}
//Q5
int main() {
    int arr[10];
    bool found;

    cout << "Enter 10 numbers:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < 10; i++) {
        found = false;
        for (int j = 0; j < 10; j++) {
            if (arr[i] == -arr[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            cout << arr[i] << " has no matching positive appearance" << endl;
        }
    }

    return 0;
}


//Q6
int main()
{

    int i,j,p,n=10;
    int arr[n];

    cout<<"enter numbers "<<endl;

    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the position"<<endl;
    cin>>p;

    for (int i = 0; i < n; ++i)
    {
        if (i==(p-1))
        {
            for (int j = i; j < n - 1; j++)
            {
                arr[j] = arr[j + 1];
            }
              n--;
        }


    }
     for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout <<endl;





    return 0;
}


//Q7
int main()
{

    int n,r,c;
    cout<<"enter number of matrix"<<endl;
    cin>>n;
    int arr1[n][n],arr2[n][n],re[n][n];


    cout<<"Input elements in matrix 1 "<<endl;
    for(r=0; r<n; r++)
    {
        for(c=0; c<n; c++)
        {
            cin>>arr1[r][c];
        }

    }
    cout<<"Input elements in matrix 2 "<<endl;
    for(r=0; r<n; r++)
    {
        for(c=0; c<n; c++)
        {
            cin>>arr2[r][c];
        }

    }
    for(r=0; r<n; r++)
    {
        for(c=0; c<n; c++)
        {
            re[r][c]=arr1[r][c]+arr2[r][c];
        }

    }
    for(r=0; r<n; r++)
    {
        for(c=0; c<n; c++)
        {
            cout<<re[r][c]<<" ";
        }
        cout<<endl;

    }


    return 0;
}

//Q8
int main()
{

    int n,r,c;
    cout<<"enter number of matrix"<<endl;
    cin>>n;
    int arr1[n][n],re[n]={0};


    cout<<"Input elements in matrix  "<<endl;
    for(r=0; r<n; r++)
    {
        for(c=0; c<n; c++)
        {
            cin>>arr1[r][c];
        }

    }

    for(r=0; r<n; r++)
    {
        for(c=0; c<n; c++)
        {
            re[r]+=arr1[r][c];
        }

    }

    for(r=0; r<n; r++)
    {

            cout<<"sum of row "<<r+1<<" is = "<<re[r]<<" "<<endl;


    }


    return 0;
}*/

//Q9
int main()
{

    int n,r,c;
    bool b=false;
    cout<<"enter number of matrix"<<endl;
    cin>>n;
    int arr1[n][n];


    cout<<"Input elements in matrix 1 "<<endl;
    for(r=0; r<n; r++)
    {
        for(c=0; c<n; c++)
        {
            cin>>arr1[r][c];
        }

    }

    for(r=0; r<n; r++)
    {
        for(c=0; c<n; c++)
        {
            if (arr1[r][c]==arr1[c][r])
            {
                b=true;
            }
        }

    }
    for(r=0; r<n; r++)
    {
        for(c=0; c<n; c++)
        {
            cout<<arr1[r][c]<<" ";
        }
        cout<<endl;

    }
    if (b)
    {
        cout<<"Given matrix is a symmetric matrix."<<endl;
    }

    else{
        cout<<"Given matrix is a assymmetric matrix."<<endl;
    }

    return 0;
}/*

*/
//Q10
void printinteger ()
{
    int x;
    cout<<" enter your integer "<<endl;
    cin>>x;
    cout<< "your number is "<<x<<endl;

}
//Q11
float average()
{
    int x,y;
    float avr,z;
    cout<<"enter 3 integers "<<endl;
    cin>>x>>y>>z;
    avr=(x+y+z)/3.0;
    return avr;
}
//Q12
void maxmin ()
{
    int n,max,min;
    cout<<"enter number of elments"<<endl;
    cin>>n;
    int arr[n];
    if(n>=2)
    {
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cout<<"enter the number"<<endl;
            cin>>arr[i];
        }
        max=min=arr[0];
        for(int i=0; i<n; i++)
        {
            if(arr[i]>max)
            {
                max=arr[i];
            }
            else if(arr[i]<min)
            {
                min=arr[i];
            }
        }
        cout<<"max is : "<<max<<endl;
        cout<<"min is : "<<min<<endl;


    }
    else
    {
        cout<<"at least 2 numbers";
    }

}
//Q13
void evenORodd ()
{
    int x;
    cout<<"enter number"<<endl;
    cin>>x;
    if(x%2==0)
    {
        cout<<"your number is even "<<endl;
    }
    else
    {
        cout<<"your number is odd "<<endl;
    }

}
//Q14
bool prime()
{
    int i=1,x,count=0;
    cout <<"enter your number"<<endl;
    cin>>x;
    while (i<=x)
    {
        if(x%i==0)
        {
            count++;
        }
        i++;
    }
    if(count==2)
    {
        return true ;
    }
    else
    {
        return false;
    }

}

//Q15
int cube()
{
    int x,i,cube=1;
    cout<<"enter the number "<<endl;
    cin>>x;
    for(i=0; i<3; i++)
    {
        cube*=x;
    }
    return cube;
}
//Q16
void circle()
{
    float r,d,circ,area;
    const long  pi=3.14159265359;
    cout<<"enter the radius "<<endl;
    cin>>r;
    d=2*r;
    circ=2*pi*r;
    area=pi*(r*r);
    cout<<" the diameter is : "<<d<<endl<<"the circumference is : "<<circ<<endl<<"the area is : "<<area<<endl;
}
//Q17
void alldivisors ()
{
    int x,i;
    cout<<"enter the number "<<endl;
    cin >>x;
    i=x;
    while(i>0)
    {
        if(x%i==0)
        {
            cout<<endl<<i;
        }
        i--;
    }
}
//Q18
int  thedifference ()
{
    int arr[10];
    int max,min,d,i;

    for(i=0; i<10; i++)
    {
        cout<<"enter the number"<<endl;
        cin>>arr[i];
    }

    max=min=arr[0];
    for (i=0; i<10; i++)
    {

        if(arr[i]>max)
        {
            max=arr[i];
        }
        else if(arr[i]<min)
        {
            min=arr[i];
        }

    }
    d=max-min;
    return d;
}
/*
int main()
{

    //printinteger();
    // cout<<average();
    // maxmin();
    //evenORodd();
    /*if(prime())
      {
          cout<<"true"<<endl;
      }
      else
      {
          cout<<"false";

    //cout<<"the cube of your number = "cube()<<endl;
    //circle();
    //alldivisors();
    //cout<<"the difference between the largest and smallest values in an array of integers : "<<thedifference()<<endl;

}
 */
