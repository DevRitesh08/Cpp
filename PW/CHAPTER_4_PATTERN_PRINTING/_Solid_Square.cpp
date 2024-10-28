// // type 1
// // FOR STARS :-->

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
        for( int j = 0 ; j < c ; j++)
        {
            cout<<"*  ";
        }
        cout<<"\n";
    }
    return 0;
}





// // type 2
// // FOR NUMBERS :-->
// 1  2  3  4  
// 1  2  3  4  
// 1  2  3  4  
// 1  2  3  4 

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
//         for( int j = 1 ; j <= c ; j++)
//         {
//             cout<<j<<"  ";
//         }
//         cout<<"\n";
//     }
//     return 0;
// }




// // type 3
// // constant numbers

// // 1  1  1  1  1  
// // 2  2  2  2  2  
// // 3  3  3  3  3  
// // 4  4  4  4  4  
// // 5  5  5  5  5 

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
//         for( int j = 1 ; j <= c ; j++)
//         {
//             cout<<i<<"  "; // j --> i
//         }
//         cout<<"\n";
//     }
//     return 0;
// }





// // type 4
// // alphabets

// A  B  C  D  E  
// A  B  C  D  E  
// A  B  C  D  E  
// A  B  C  D  E  
// A  B  C  D  E 

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
//         char ch = 'A'; // as  every row starts with A 
//         for( int j = 1 ; j <= c ; j++)
//         {
//             cout<<ch << "  " ; 
//             ch ++ ;
//         }
//         cout<<"\n";
//     }
//     return 0;
// }





// // type 5
// // alphabets

// // A  B  C  D  E  
// // F  G  H  I  J  
// // K  L  M  N  O  
// // P  Q  R  S  T  
// // U  V  W  X  Y 

// #include<iostream>
// using namespace std ;
// int main()
// {
//     int r,c ;
//     cout<<"enter number of rows : ";
//     cin >> r ;
//     cout<<"enter number of columns : ";
//     cin >> c ;
//     char ch = 'A'; 
    
    
//     for( int i = 1 ; i <= r ; i++)
//     {
//         for( int j = 1 ; j <= c ; j++)
//         {
//             cout<<ch << "  " ; 
//             ch ++ ;
//         }
//         cout<<"\n";
//     }
//     return 0;
// }






// // type 6
// // alphabets

// // A  A  A  A  A  
// // B  B  B  B  B  
// // C  C  C  C  C  
// // D  D  D  D  D
// // E  E  E  E  E

// #include<iostream>
// using namespace std ;
// int main()
// {
//     int r,c ;
//     cout<<"enter number of rows : ";
//     cin >> r ;
//     cout<<"enter number of columns : ";
//     cin >> c ;
//     char ch = 'A'; 
    
    
//     for( int i = 1 ; i <= r ; i++)
//     {
//         for( int j = 1 ; j <= c ; j++)
//         {
//             cout<<ch << "  " ; 
//         }

//          ch ++ ;
//         cout<<"\n";
//     }
//     return 0;
// }