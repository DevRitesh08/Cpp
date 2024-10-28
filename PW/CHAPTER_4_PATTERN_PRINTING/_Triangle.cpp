// // type 1

// // enter number of rows : 4
// // enter number of columns : 4
// // *
// // * *
// // * * *
// // * * * *

#include<iostream>
using namespace std ;
int main()
{
    int r,c ;
    cout<<"enter number of rows : ";
    cin >> r ;
    cout<<"enter number of columns : ";
    cin >> c ;
    
    for( int i = 0 ; i < r ; i++)
    {
        for( int j = 0 ; j <= i ; j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
    return 0;
}





// type 2

// enter number of rows : 4
// enter number of columns : 4
// 1
// 12
// 123
// 1234

// #include<iostream>
// using namespace std ;
// int main()
// {
//     int r,c ;
//     cout<<"enter number of rows : ";
//     cin >> r ;
//     cout<<"enter number of columns : ";
//     cin >> c ;
    
//     for( int i = 1 ; i <= r ; i++)
//     {
//         for( int j = 1 ; j <= i ; j++)
//         {
//             cout<<j;
//         }
//         cout<<"\n";
//     }
//     return 0;
// }






// type 3

// enter number of rows : 4
// enter number of columns : 4
// 1
// 22
// 333
// 4444

// #include<iostream>
// using namespace std ;
// int main()
// {
//     int r,c ;
//     cout<<"enter number of rows : ";
//     cin >> r ;
//     cout<<"enter number of columns : ";
//     cin >> c ;
    
//     for( int i = 1 ; i <= r ; i++)
//     {
//         for( int j = 1 ; j <= i ; j++)
//         {
//             cout<<i;
//         }
//         cout<<"\n";
//     }
//     return 0;
// }





// type 4

// enter number of rows : 4
// 4  
// 4  3  
// 4  3  2  
// 4  3  2  1

// #include<iostream>
// using namespace std ;
// int main()
// {
//     int r,c ;
//     cout<<"enter number of rows : ";
//     cin >> r ;
   
//     for( int i = 1 ; i <= r ; i++)
//     {
//         int num = r ;
//         for( int j = 1 ; j <= i ; j++ , num--)
//         {
//             cout<< num <<"  ";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }





// type 5

// enter number of rows : 4
// 4  
// 4  3  
// 4  3  2  
// 4  3  2  1 

// #include<iostream>
// using namespace std ;
// int main()
// {
//     int r,c ;
//     cout<<"enter number of rows : ";
//     cin >> r ;
   
//     for( int i = 1 ; i <= r ; i++)
//     {
//         int num = r ;
//         for( int j = 1 ; j <= i ; j++ , num--)
//         {
//             cout<< num <<"  ";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }



// type 6 (Odd number triangle)

// enter number of rows : 4
// 1  
// 1  3  
// 1  3  5  
// 1  3  5  7

// #include<iostream>
// using namespace std ;
// int main()
// {
//     int r,c ;
//     cout<<"enter number of rows : ";
//     cin >> r ;
   
//     for( int i = 1 ; i <= r ; i++)
//     {
//         int num = 1; 
//         for( int j = 1 ; j <= i ; j++ , num += 2)
//         {
//             cout<< num <<"  ";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }





// type 7 ( Floyd's triangle ))

// enter number of rows : 4
// 1  
// 2  3  
// 4  5  6  
// 7  8  9  10 

// #include<iostream>
// using namespace std ;
// int main()
// {
//     int r,c ;
//     cout<<"enter number of rows : ";
//     cin >> r ;
//     int num = 1; 
   
//     for( int i = 1 ; i <= r ; i++)
//     {
//         for( int j = 1 ; j <= i ; j++ , num ++)
//         {
//             cout<< num <<"  ";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }





// type 8 ( 0 & 1 triangle ))

// enter number of rows : 4
// 1  
// 0  1  
// 1  0  1  
// 0  1  0  1 

// #include<iostream>
// using namespace std ;
// int main()
// {
//     int r,c ;
//     cout<<"enter number of rows : ";
//     cin >> r ;  
     
   
//     for( int i = 1 ; i <= r ; i++)
//     {
//         for( int j = 1 ; j <= i ; j++ )
//         { 
//             if((i+j)%2 == 0) // dont do i+j%2 == 0 its wrong 
//                 cout<< 1 <<"  ";
//             else
//                 cout<< 0 << "  ";

//         }
//         cout<<"\n";
//     }
//     return 0;
// }





// // type 1

// enter number of rows : 4
// *  *  *  *
// *  *  *
// *  *
// *

// #include<iostream>
// using namespace std ;
// int main()
// {
//     int r,c ;
//     cout<<"enter number of rows : ";
//     cin >> r ;
    
//     for( int i = 1 ; i <= r ; i++)
//     {
//         for( int j = 1 ; j <= r - i + 1 ; j++)
//         {
//             cout<<"*  ";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }