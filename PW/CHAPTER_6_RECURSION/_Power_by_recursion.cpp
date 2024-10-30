// QUESTION : make a function which calculates m raised to the power n using recursion .

#include<iostream>
using namespace std;

int power (int x , int y) 
{
    if( y == 0 )
        return 1 ; // power when m = 1 is also 1

    return x * power(x , y-1) ;  
}

int main()
{
    int n,m;
    cout<<"enter a number : ";
    cin>>n;
     cout<<"enter a number : ";
    cin>>m;
    int x = power(n,m);

    cout<<n<<" raised to the power "<<m<<" is : "<<x;

    return 0 ;
}