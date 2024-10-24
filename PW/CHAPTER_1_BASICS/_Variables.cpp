#include<iostream>
using namespace std ;
int main()
{
    // int a = 5;
    // cout<<a+8<<endl<<a*a*8;
    
    int x = 12 ,y = 84 ;
    // cout<<"the sum of "<< x <<" and " << y <<" is "<< x+y <<endl;
    
    x = 67 ;
    cout << x++ <<endl ;// pre-increment operator
    cout << x <<endl ;// post-increment operator
    cout << ++x <<endl ;

    x += 33;// an also use /= , *= and -= too
    // //cout << "the value of x is : " x >> endl ;// not valid it'll generate an error so do only one thing at once print string or variable .
    cout<< "the value of x is : " << x;

    return 0;
}