
// type 3
// constant numbers

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
        for( int j = 1 ; j <= c ; j++)
        {
            cout<<i<<"  "; // j --> i
        }
        cout<<"\n";
    }
    return 0;
}
