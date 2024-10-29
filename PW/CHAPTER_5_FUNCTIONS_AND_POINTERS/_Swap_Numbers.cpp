// ERROR !!
// due to scope of variable and as the function call is call by value

// #include<iostream>
// using namespace std;

// swap(int x , int y)
// {
//     int temp = x ;
//     x = y ;
//     y = temp ;
// }

// int main()
// {
//     int n , m ;
//     cout<<"Enter a number ";
//     cin>>n;
//     cout<<"Enter a number ";
//     cin>>m;
//     cout<<"Original : "<<n<<" "<<m<<endl;
//     swap(n,m);
//     cout<<"swap values : "<<n<<" "<<m;

// }






// solution 1 ( pass by reference )

// #include<iostream>
// using namespace std;

// swap(int &x , int &y)// just by putting " address of " operator before formal arguments
// {                    // valid in cpp but not in c
//     int temp = x ;
//     x = y ;
//     y = temp ;
// }

// int main()
// {
//     int n , m ;
//     cout<<"Enter a number ";
//     cin>>n;
//     cout<<"Enter a number ";
//     cin>>m;
//     cout<<"Original : "<<n<<" "<<m<<endl;
//     swap(n,m);
//     cout<<"swap values : "<<n<<" "<<m;

// }





// solution 2 (without function)

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n , m ;
//     cout<<"Enter a number ";
//     cin>>n;
//     cout<<"Enter a number ";
//     cin>>m;
//     cout<<"Original : "<<n<<" "<<m<<endl;
    
//     int temp = n ;
//     n = m ;
//     m = temp ;

//     cout<<"swap values : "<<n<<" "<<m;

// }





// solution 3 (without function)

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n , m ;
//     cout<<"Enter a number ";
//     cin>>n;
//     cout<<"Enter a number ";
//     cin>>m;
//     cout<<"Original : "<<n<<" "<<m<<endl;
    
//     n = n + m ;
//     m = n - m ;
//     n = n - m ;

//     cout<<"swap values : "<<n<<" "<<m;

// }






// solution 4 (without function)


#include<iostream>
using namespace std;

swap(int* x , int* y)
{                   
    int temp = *x ;
    *x = *y ;
    *y = temp ;
}

int main()
{
    int n , m ;
    cout<<"Enter a number ";
    cin>>n;
    cout<<"Enter a number ";
    cin>>m;
    cout<<"Original : "<<n<<" "<<m<<endl;
    swap(&n,&m);
    cout<<"swap values : "<<n<<" "<<m;

}