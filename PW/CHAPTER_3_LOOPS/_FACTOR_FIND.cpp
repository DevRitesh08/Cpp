// WAP to find the highest factor of a number 'n' (other than n itself)
// example  24 --> 1,2,3,4,6,8,12 not 24 as per question

// gp --> 1,2,4,8,16,32,64........

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number to find its highest factor other than the number itself : ";
    cin >> n ;
    int Hf = 1 ;
    int count = 0 ;

    // method 1 (less optimum)
    for(int i = 1 ; i <= n/2 ; i ++ ) // i == n no as per question
    {   count ++ ;                    // i/2 to avoid unnecessary iterations of loop
        if (n%i == 0)
            Hf = i ;
    }

    // // method 2
    // for(int i = n/2 ; i >= 1 ; i -- ) // reverse loop as highest factor is in last
    // {    
    //     count ++ ;                             
    //     if (n%i  == 0)
    //         Hf = i ;
    //         break;
    // }

    

    // to print all factors
    cout<<"all factors of "<< n << " are : " ;
    for(int i = 1 ; i <= n ; i ++ ) // 
    {
        if (n%i == 0)
            cout<<i<<"  ";
    }

    cout<<"\nhighest factor other than the number itself is : "<<Hf ;
    cout<<"\nTotal loop iterations : "<<count ;

    return 0;
}



