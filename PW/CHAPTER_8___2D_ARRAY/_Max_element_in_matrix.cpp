#include<iostream>
using namespace std ;
int main()
{
    int arr[][5] = {1,2,3,4,54,321,76,256,1,54};
    int mx = arr[0][0];

    for(int i = 0 ; i<2 ; i++)
    {
        for(int j = 0 ; j<5 ;j++)
        {
        //    if(mx < arr[i][j])
        //         mx = arr[i][j];

            mx = max(mx,arr[i][j]);
        }
    }

    cout<<"Maximum element in matrix is : "<<mx;

    return 0;

}