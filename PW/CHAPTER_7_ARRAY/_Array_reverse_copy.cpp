#include<iostream>
using namespace std ;
int main()
{
    int arr[] = {4,9,7,3,34,76,22};
    int n = sizeof(arr)/4;
    int brr[n] ;

    for(int i = 0 ; i < n ; i++)
    {
        brr[i] = arr[n-1-i];
        cout<<brr[i]<<" ";
    }
}