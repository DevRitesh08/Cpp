// enter number of rows (only odd) : 5
//        *       
//        *       
//  *  *  *  *  * 
//        *       
//        *  

#include<iostream>
using namespace std ;
int main()
{
    int r,c ;
    cout<<"enter number of rows (only odd) : ";
    cin >> r ;  
     
   
    for( int i = 1 ; i <= r ; i++)
    {
        for( int j = 1 ; j <= r ; j++ )
        { 
            if((i == (r+1)/2 ) || (j == (r+1)/2))
                cout<< " * ";
            else
                 cout<< "   ";
        }
        cout<<"\n";
    }
    return 0;
}