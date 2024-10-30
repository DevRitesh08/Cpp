// #include<iostream>
// using namespace std ;
// int main()
// {
//     int arr[5] = {5,4,1,8,9}; // OR int arr[] = {5,4,1,8,9};
//     for(int i = 0 ; i < 5 ; i++ ) // same with cin
//         cout<<arr[i]<<" ";
// }





// PASSING TO ARRAY IS CALL BY REFERENCE

#include<iostream>
using namespace std ;

void change(int arr[]) // if here name of array is changed to brr[],r[].....etc still same output as array address remain same .
{
    arr[0] = 98;
    arr[1] = 87;
    arr[2] = 34;
    arr[3] = 32;
    arr[4] = 82;
}

int main()
{
    int arr[5] = {5,4,1,8,9};
    for(int i = 0 ; i < 5 ; i++ )
        cout<<arr[i]<<" ";

    change(arr); // don't use []

    cout<<endl;
    
    // change
    for(int i = 0 ; i < 5 ; i++ )
        cout<<arr[i]<<" ";
}