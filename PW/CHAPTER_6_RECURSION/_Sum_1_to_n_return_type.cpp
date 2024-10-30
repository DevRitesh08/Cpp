// method 1 (not good)

#include<iostream>
using namespace std;

int sum (int x , int s) 
{
    if(x==0)
        return s ;
    
    s = s + x ;
    sum(x-1,s);
}

int main()
{
    int n;
    cout<<"enter a number : ";
    cin>>n;
    int a = sum(n,0);

    cout<<"sum is : "<<a;

    return 0 ;
}





// method 2 (very good)

// #include<iostream>
// using namespace std;

// int sum (int x) 
// {
//     if(x==1)
//         return 1 ; // sum when n = 1 is also 1

//     return x + sum(x-1) ;  
// }

// int main()
// {
//     int n;
//     cout<<"enter a number : ";
//     cin>>n;

//     cout<<"sum is : "<<sum(n);

//     return 0 ;
// }