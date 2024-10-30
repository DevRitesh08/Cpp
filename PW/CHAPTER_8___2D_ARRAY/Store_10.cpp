// store 10 at every index of matrix .

#include<iostream>
using namespace std ;
int main()
{
    int arr[5][5];

    // store 10
    for(int i = 0 ; i<5 ; i++)
    {
        for(int j = 0 ; j<5 ;j++)
        {
            arr[i][j] = 10 ;
        }
    }

    // matrix print
    for(int i = 0 ; i<5 ; i++)
    {
        for(int j = 0 ; j<5 ;j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }    
   

    return 0;

}