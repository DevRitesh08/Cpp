// enter number of rows : 5
// enter number of columns : 5
// 1  
// A  B  
// 1  2  3  
// A  B  C  D  
// 1  2  3  4  5

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
        for( int j = 1 ; j <= i ; j++)
        {
            if(i%2 != 0)
                cout<<j<<"  ";
            else
                cout<<(char)(j+64)<<"  ";
        }
        cout<<"\n";
    }
    return 0;
}