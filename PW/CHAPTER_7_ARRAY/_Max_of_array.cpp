#include<iostream>
using namespace std ;
int main()
{
    int arr[] = {4,9,7,3,34,76,22};
    int n = sizeof(arr)/4; // to calculate number of elements (4 is size occupied by one integer ) .
    int product = 1;
    int max = arr[0];
    for(int i = 0 ; i < n ; i++)
    {
        if(max < arr[i])
            max = arr[i];
    }
    cout<<"Maximum element is : "<<max ;
}