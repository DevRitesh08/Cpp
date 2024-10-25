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
    if( n>99 and n<1000)
        cout<< "You entered a three digit number !";

    else
        cout<< "Number is not three digit !";
}

// HENCE WE CAN USE 
// and INSTEAD OF &&
// or INSTEAD OF ||