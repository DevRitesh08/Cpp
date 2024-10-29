// using funnctions

// type 1

// enter a number : 5
// 1 
// 1 1 
// 1 2 1 
// 1 3 3 1 
// 1 4 6 4 1 

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
    int n;
    cout<<"enter a number : ";
    cin>> n ;
    
    for(int i = 0 ; i < n ; i++ )
    {
        for(int j = 0 ; j <= i ; j++)
        {
            int a = fact(i);
            int b = fact(j);
            int c = fact(i-j);
            cout<<a/(b*c)<<" ";
        }
        cout<< endl ;

    }
    
    return 0 ;
} 





// type 2

// enter a number : 5
//     1 
//    1 1 
//   1 2 1 
//  1 3 3 1 
// 1 4 6 4 1     

// #include<iostream>
// using namespace std ;

// int fact(int x)
// {
//     int f = 1 ;
//     for(int i = 1 ; i <= x ; i++)
//         f *= i ;
    
//     return f ;
    
// }

// int main ()
// {
//     int n;
//     cout<<"enter a number : ";
//     cin>> n ;
    
//     for(int i = 0 ; i < n ; i++ )
//     {
//          for(int j = 1 ; j < n - i  ; j++ )
//         {
//             cout<<" ";
//         }

//         for(int j = 0 ; j <= i ; j++)
//         {
//             int a = fact(i);
//             int b = fact(j);
//             int c = fact(i-j);
//             cout<<a/(b*c)<<" ";
//         }
//         cout<< endl ;
        

//     }


    
//     return 0 ;
// } 