#include<iostream>
using namespace std ;
int main()
{
    int arr[] = {4,9,7,3};
    int n = sizeof(arr)/4; // to calculate number of elements (4 is size occupied by one integer ) .
    int product = 1;
    for(int i = 0 ; i < n ; i++)
    {
        product *= arr[i];
    }
    cout<<"product is : "<<product ;
}