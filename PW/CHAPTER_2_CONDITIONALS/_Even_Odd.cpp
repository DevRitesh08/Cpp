#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"Enter a number : ";
    cin>>n ;

    // if(n%2 == 0)
    //     cout<<"the number "<< n << " is EVEN";
    
    // else
    //     cout<<"the number "<< n << " is ODD";

    // ternary operator
    ( n%2 == 0) ? cout <<"even" : cout << "odd";
}