// wap to print sum of digits of a given number .

#include<iostream>
using namespace std ;
int main ()
{
    int num ;
    cout<<"enter a number : ";
    cin>> num ;
    int last_digit , sum = 0 ;

    while( num != 0)
    {
        last_digit = num%10 ; // last digit
        sum += last_digit ;
        num /= 10 ;

    }

    cout <<" the sum of digits is : "<<sum ;

}