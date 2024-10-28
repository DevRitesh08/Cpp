#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n ;
    if( n >= 0)
        cout<<"the absolute value is : "<< n ;
    // else
    //     cout<<"the absolute value is : "<< -n ; // but this will not change the value of n 

    else
    {
        n = - n ;
         cout<<"the absolute value is : "<< n ; // this will change the value of n
    }
}