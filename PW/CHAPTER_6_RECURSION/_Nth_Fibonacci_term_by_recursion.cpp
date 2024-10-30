// QUESTION : make a function which calculates the nth fibonacci number using recursion .

#include<iostream>
using namespace std;

int fibo (int x) 
{
    if( x == 1 || x == 2 )
        return 1 ; // fibo series --> 1,1,2,3,5,8,13,21.......

    return fibo(x-1) + fibo(x-2) ;  
}

int main()
{
    int n,m;
    cout<<"enter a number : ";
    cin>>n;

    cout<<n<<" term of fibonacci series is : "<<fibo(n);

    return 0 ;
}