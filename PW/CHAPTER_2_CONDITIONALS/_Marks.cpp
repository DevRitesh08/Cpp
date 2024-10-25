#include<iostream>
using namespace std ;
int main()
{
    int n ;
    cout<<" enter a marks : ";
    cin>> n ;

    if( n <= 100 and n > 80 )
        cout<< "VERY GOOD";

    if(  n <= 80 and n > 60 )
        cout<< "GOOD";

    if( n <= 60 && n > 40 )
        cout<< "AVERAGE";

    if( n <= 40)
        cout<< "FAIL";

    return 0 ;
}