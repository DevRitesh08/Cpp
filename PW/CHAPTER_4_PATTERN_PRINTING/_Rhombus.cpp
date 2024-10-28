// enter number of rows (only odd) : 4
//       * * * * 
//     * * * * 
//   * * * * 
// * * * * 

#include<iostream>
using namespace std ;
int main()
{
    int r,c ;
    cout<<"enter number of rows (only odd) : ";
    cin >> r ;  ; 
   
    for( int i = 1 ; i <= r ; i++)
    {
        // blank space
        for( int j = 1 ; j <= r - i ; j++ )
        { 
            cout<<"  ";
             
        }
        // stars
        for( int j = 1 ; j <= r  ; j++ )
        { 
            cout<<"* ";
             
        }
        cout<<"\n";
    }
    return 0;
}