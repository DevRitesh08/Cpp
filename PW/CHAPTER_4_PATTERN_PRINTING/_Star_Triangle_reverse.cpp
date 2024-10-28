#include<iostream>
using namespace std ;
int main()
{
    int r,c ;
    cout<<"enter number of rows : ";
    cin >> r ;  ; 
   
    for( int i = 1 ; i <= r ; i++)
    {
        // blank space
        for( int j = 1 ; j <= r - i ; j++ )
        { 
            cout<<" ";
             
        }
        // stars
        for( int j = 1 ; j <= i  ; j++ )
        { 
            cout<<"*";
             
        }
        cout<<"\n";
    }
    return 0;
}