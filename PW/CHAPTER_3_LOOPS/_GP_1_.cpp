// gp --> 1,2,4,8,16,32,64........

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of terms to print of the above GP : ";
    cin >> n ;
    
    cout<<"N terms of GP are : " ;
    int a = 1;
    for(int i = 1 ; i <= n ; i ++ )
    {
        cout << a << "  "; 
        a = a * 2 ;
    }

    return 0;
}



