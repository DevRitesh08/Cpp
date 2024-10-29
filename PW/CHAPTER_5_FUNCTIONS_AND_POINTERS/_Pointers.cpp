#include<iostream>
using namespace std ;
int main ()
{
    int x = 3 ;
    int* ptr = &x ;
    cout<<"address of x "<<&x<<endl;
    cout<<"address at ptr : "<<ptr<<endl;
    cout<<"value of x : "<<x<<endl;
    cout<<"value of x : "<<*ptr<<endl;
    // " * " is the dereference operator
    cout<<"address of ptr : "<<&ptr<<endl;

    // value change of x
    x = 9 ;
    cout<<"new value of x : "<<x<<endl;

    *ptr = 75 ;
    cout<<"new value of x : "<<x<<endl;
    cout<<"new value of x : "<<*ptr<<endl;

    return 0 ;
}