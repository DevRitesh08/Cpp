// QUESTION : count the number of elements greater than a given number x .

#include<iostream>
using namespace std ;
int main()
{
    int arr[] = {4,1,4,67,8,87,83,223,21,5,21,65,322};
    int n = sizeof(arr)/4; // to calculate number of elements (4 is size occupied by one integer ) .
    int x = 50;
    int count = 0 ;
    for(int i = 0 ; i < n ; i++)
    {
        if(arr[i] > x)
            count++;
    }
    cout<<"number of elements greater than x is : "<<count ;
}