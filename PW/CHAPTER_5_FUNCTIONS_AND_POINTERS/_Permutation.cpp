
// using funnctions

#include<iostream>
using namespace std ;

int fact(int x)
{
    int f = 1 ;
    for(int i = 1 ; i <= x ; i++)
        f *= i ;
    
    return f ;
    
}

int main ()
{
    int n,r ;
    cout<<"enter a number (n) : ";
    cin>> n ;
    cout<<"enter a number (r) : ";
    cin>> r ;

    int a = fact(n);
    int b = fact(n-r);

    cout<<"the value of nCr is : "<< a/b ;
    return 0 ;
}