// Without using funnctions

// #include<iostream>
// using namespace std ;
// int main ()
// {
//     int n,r ;
//     cout<<"enter a number (n) : ";
//     cin>> n ;
//     cout<<"enter a number (r) : ";
//     cin>> r ;

//     int a = 1 ;
//     for(int i = 1 ; i <=n ; i++ )
//     {
//         a *= i ;
//     }

//     int b = 1 ;
//     for(int i = 1 ; i <= r ; i++ )
//     {
//         b *= i ;
//     }

//     int c = 1 ;
//     for(int i = 1 ; i <= (n - r) ; i++ )
//     {
//         c *= i ;
//     }

//     cout<<"the value of nCr is : "<< a/(b*c) ;
//     return 0 ;
// }





// using funnctions

#include<iostream>
using namespace std ;

int fact(int x)
{
    int f = 1 ;
    for(int i = 1 ; i <= x ; i++)
        f *= i ;
    
    return f ;
    
}

int main ()
{
    int n,r ;
    cout<<"enter a number (n) : ";
    cin>> n ;
    cout<<"enter a number (r) : ";
    cin>> r ;

    int a = fact(n);
    int b = fact(r);
    int c = fact(n-r);

    cout<<"the value of nCr is : "<< a/(b*c) ;
    return 0 ;
} 