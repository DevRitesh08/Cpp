// Using extra paremeter

// #include<iostream>
// using namespace std ;

// print(int x , int temp) // by default its type is int
// {
//     if( temp > x ) // in == case n won't be printed // base case
//         return 1 ;
    
//     cout<<temp++<<endl; // work
//     print(x,temp); // call
// }

// int main()
// {
//     int n;
//     cout<<"Enter a number : ";
//     cin>>n;
//     int temp = 1;
//     print(n,temp);

//     return 0 ;
// }





// without extra parameter

#include<iostream>
using namespace std ;

print(int x) 
{
    if(x == 0 ) 
        return 1 ;
    print( x-1 ); // nothing is printed till x reaches 0 and after that it is printed in reverse order
    cout<<x<<endl; // as function call is above the print statement .
}

int main()
{
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int temp = 1;
    print(n);

    return 0 ;
}