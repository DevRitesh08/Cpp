// gp --> 3,12,48,........

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of terms to print of the above GP : ";
    cin >> n ;
    
    cout<<"N terms of GP are : " ;
    int a = 3;
    for(int i = 1 ; i <= n ; i ++ )
    {
        cout << a << "  "; 
        a = a * 4 ;
    }

    return 0;
}



