#include<iostream>
using namespace std;

int main()
{
    int n , m ;
    cout<<"Enter a number ";
    cin>>n;
    cout<<"Enter a number ";
    cin>>m;
    cout<<"Original : "<<n<<" "<<m<<endl;
    
    n = m + n ;
    m = m - n ;
    n = m - n ;

    cout<<"swap values : "<<n<<" "<<m;

}