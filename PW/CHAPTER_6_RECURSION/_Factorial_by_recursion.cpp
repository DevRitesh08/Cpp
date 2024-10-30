
#include<iostream>
using namespace std;

int fact (int x) 
{
    if(x == 1 || x == 0)
        return 1 ; // sum when n = 1 is also 1

    return x * fact(x-1) ;  
}

int main()
{
    int n;
    cout<<"enter a number : ";
    cin>>n;

    cout<<"factorial is : "<<fact(n);

    return 0 ;
}