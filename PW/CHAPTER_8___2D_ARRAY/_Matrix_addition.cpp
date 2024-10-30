// matrix addition is only valid when dimension of both the matrix are same .

#include<iostream>
using namespace std ;
int main()
{
    int arr[2][2] = {1,2,3,4};
    int brr[2][2] = {9,7,4,2};

    for(int i = 0 ; i<2 ; i++)
    {
        for(int j = 0 ; j<2 ;j++)
        {
            cout<<arr[i][j] + brr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;

}