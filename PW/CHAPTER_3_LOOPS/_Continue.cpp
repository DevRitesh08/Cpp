#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"Enter a number : ";
    cin>>n ;

    for (int i = 1 ; i <= n ; i++)
    {
        if(i==3 or i==7)
            continue;
        
        cout<<i<<"  ";
    }

   
}