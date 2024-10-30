

#include<iostream>
using namespace std ;
int main()
{
    int arr[] = {4,9,7,3,7,5,9,4};
    int n = sizeof(arr)/4;
    int i = 0 , j = n - 1 ;

    // array print
    for(int i = 0 ; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }

    while(i<j)
    {
       if(arr[i] != arr[j])
       {
        cout<<"\narray is not pallindrome ";
        return 1 ;
       }
       i++;
       j--;
    }

    cout<<"\narray is pallindrome ";
    return 0;

}