#include<iostream>
using namespace std;

void sum (int x , int s) // in case of void only use return ;  ( no use of 0 , 1 .....etc) .
{
    if(x==0)
    {
        cout<<"sum is : "<<s;
        return ;
    }
    
    s = s + x ;
    sum(x-1,s);
}

int main()
{
    int n;
    cout<<"enter a number : ";
    cin>>n;
    sum(n,0);

    return 0 ;
}