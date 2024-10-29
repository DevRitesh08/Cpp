#include<iostream>
using namespace std ;

int sum(int x , int y ) // formal parameters
{
    return ( x + y);
}

int main()
{
    int a,b;
    cout<<"enter 1st number : ";
    cin>> a ;
    cout<<"enter 2nd number : ";
    cin>> b ;
    cout<< sum(a,b); // actual parameters
}