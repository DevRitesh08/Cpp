#include<iostream>
using namespace std ;
int main()
{
    int arr[] = {45,76,28,154,63,46,05,32,433,46,85};
    int n = sizeof(arr)/4; // to calculate number of elements (4 is size occupied by one integer ) .
    int sum = 0;
    for(int i = 0 ; i < n ; i++)
    {
        sum += arr[i];
    }
    cout<<"sum is : "<<sum ;
}