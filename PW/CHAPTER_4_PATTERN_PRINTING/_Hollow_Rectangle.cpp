// enter number of rows : 4
// enter number of columns : 6
// * * * * * * 
// *         * 
// *         * 
// * * * * * * 

#include<iostream>
using namespace std ;
int main()
{
    int r,c ;
    cout<<"enter number of rows : ";
    cin >> r ;  
    cout<<"enter number of columns : ";
    cin >> c ; 
   
    for( int i = 1 ; i <= r ; i++)
    {
        for( int j = 1 ; j <= c ; j++ )
        { 
            if(i == 1 || i == r || j == 1 || j == c ) 
                cout<<"* ";
            else
                cout<<"  ";
        }
        cout<<"\n";
    }
    return 0;
}