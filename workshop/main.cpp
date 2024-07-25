#include <iostream>
#include <string>


using namespace std;
//1
void iseven (int x)
{
    int r=0;
    while (x!=0)
    {
       r=x%10;
       x=x/10;
    }
    if (r%2==0)
    {
        cout<<"even"<<endl;
    }
    else
    {
        cout<<"odd"<<endl;
    }
}

//2
void sum (int x, int y,int z )
{

    int sum=0;
    int i;
    for(i=x;i<=y;i++)
    {
        if (i%z==0)
        {

            sum+=i;
            cout << i<<endl;
        }
    }
    cout << "sum = "<<sum<<endl;

}

//3
void digits(int x)
{
    int r=0;
    while (x!=0)
    {
       r=x%10;
       cout << r <<" ";
       x=x/10;
    }

}
//4
void lastprime (int x)
{
    int i ;
    int count =0;
    for(i=x;i>0;i--)
    {
        count =0;

        for(int j=1;j<=i;j++)
        {
            if (i%j==0)
            {
                count ++ ;
            }
        }

        if (count == 2 )
        {
            cout<<i<<endl;
            break;
        }


    }
}

//5
int power(int base ,int pow)
{
    int r =1 ;
    int i;
    for (i=1;i<=pow;i++)
    {
        r*=base ;
    }
    return r;
}

//6
void sumofseries (int x)
{
    int i=1;
    int r=0;
    int sum=0;
    for(i=0;i<=x;i++)
    {
        r+=power(10,i);
        cout << r << " + " ;
        sum +=r;
    }
    cout<<"sum = "<<sum<< endl;

}

//7
void frequency(int arr[],int n)
{
    int i,j;
    int count=0;
    bool counted[n] = {false};
    for(i=0;i<n-1;i++)
    {
        count=1;
        if (counted[i])
            continue;

        for(j=1;j<n-1;j++)
        {
            if (arr[i]==arr[j])
            {
                count ++;
                counted[j] = true;
            }
        }

        cout << "Element " << arr[i] << " occurs " << count << " times." << endl;
    }
}
//8
void diagonals(int *arr[],int row ,int col)
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;i++)
        {
            cout << arr[i][j] << " ";

        }
    }

}



int main()
{
    int x,y;
    int arr[x][y]= {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };



    return 0;
}

    //cout<<"enter the number"<<endl;
   // cin>>x;
    //iseven (x) ;
   // sum(100,200,9);
  // digits(5684);
    // lastprime(52);
    //sumofseries(5);
    //int arr[] = {1, 2, 2, 3, 3, 3, 4, 5, 5};
   // int n = 9;
    //frequency(arr,n);


