// wap to  print reverse of a given number  

// main logic
// reverse = reverse * 10 ; reverse = reverse + ld ; and  n = n/10 ; 

#include<iostream>
using namespace std ;
int main ()
{
    int num ;
    cout<<"enter a number : ";
    cin>> num ;
    
    //int x = num ; // for additional question
 
    int reverse = 0 , ld;
    while( num != 0)
    {
        ld = num % 10  ;
        reverse = reverse*10;
        reverse = reverse +ld ;
        num = num/10 ;

    }

    cout <<" the reverse of given number is : "<<reverse ;

    // // additional question if sum of reverse + orginal number = ?
    // cout<<"\nthe sum of original number + reverse number is : "<<reverse + x ;
}