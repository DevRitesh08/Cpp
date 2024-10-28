// // type 1

// #include<iostream>
// using namespace std ;
// int main()
// {
//     int num , factorial = 1 ;
//     cout<<"enter a number : ";
//     cin>>num ;
//     for(int i = 1 ; i <= num ; i++)
//     {
//         factorial *= i ;
//     }

//     cout<<"factorial is : "<< factorial;

// }





// // type 2

// #include<iostream>
// using namespace std ;
// int main()
// {
//     int num , factorial = 1 ;
//     cout<<"enter a number : ";
//     cin>>num ;
//     for(int i = 1 ; i <= num ; i++)
//     {
//         factorial *= i ;
//         cout<<"\nfactorial of "<<i << " is : "<< factorial;
//     }

// }





// type 3(to find sum of n factorial)

#include<iostream>
using namespace std ;
int main()
{
    int num , factorial = 1 , sum = 0 ;
    cout<<"enter a number : ";
    cin>>num ;
    for(int i = 1 ; i <= num ; i++)
    {
        factorial *= i ;
        sum = sum + factorial ;
    }

    cout<<"\nSum of factorial of "<< num << " numbers is : "<< sum;


}


