#include<iostream>
using namespace std;

int power_log(int a , int b)
{
     if ( b==0 ) return 1;
    // if ( b==1 ) return a; no longer needed due to else block
    int x = power_log(a,b/2);   // this prevents dual recursion of power_log function
    if(b%2 == 0)                // ex , pow = power_log(a,b/2) * power_log(a,b/2) ;   
        return x*x ;            // 2^8 = 2^4 * 2^4
    else
        return a*x*x ;
}

int main()
{
    int n,m ;
    cout<<"enter base : ";
    cin>>n;
    cout<<"enter power : ";
    cin>>m;

    cout<<n <<" raised to the power "<<m<<" is : "<<power_log(n,m);

    return 0;
}