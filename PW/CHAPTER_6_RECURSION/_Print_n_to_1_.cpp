#include<iostream>
using namespace std;

int print(int x) //if type of function is not declared then by default it will be int ! .
{
    if(x == 0) // base case to terminate recursive calls
        return 0;
    cout<<x<<"\n";
    x--; 
    print(x);
}

int main()
{
    int n ;
    cout<<"enter a number : ";
    cin>>n;
    if(n<=0)
    {
        cout<<"enter value greater than 0 ";
        return 1;
    }

        
    print(n);

    return 0;
}