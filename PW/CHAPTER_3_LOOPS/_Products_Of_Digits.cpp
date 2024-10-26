// wap to print product of digits of a given number .

#include<iostream>
using namespace std ;
int main ()
{
    int num ;
    cout<<"enter a number : ";
    cin>> num ;
    int last_digit , prod = 1 ;

    while( num != 0)
    {
        last_digit = num%10 ; // last digit
        prod *= last_digit ;
        num /= 10 ;

    }

    cout <<" the product of digits is : "<<prod ;

}