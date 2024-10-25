// take positive integer input and tell if it is a three digit number or not .

#include<iostream>
using namespace std ;
int main()
{
    int n ;
    cout<<" enter a number : ";
    cin>> n ;

    // // Method 1 
    // if( n>99 && n<1000)
    //     cout<< "You entered a three digit number !";

    // Method 2
    if( n%3 == 0 and n%5 == 0)// in case of divisible by 5 or 3 , just replace and --> or ( && --> || )
        cout<< "Number is divisible by 5 and 3 !";

    else
        cout<< "Number is not divisible by 5 and 3 !";
}

