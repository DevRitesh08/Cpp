// program to check if a number is composite or not ,
// composite number : number having extra factors other than 1 and number itself

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number  : ";
    cin >> n ;
    int count = 0 ;
    int Cn = 0 ;// NUMBER IS PRIME

    // method 1 (less optimum)
    for(int i = 2 ; i <= n/2 ; i ++ ) // not checking for 1 and n and as there are is only 1 factor after n/2 that is n
    {                             // i/2 to avoid unnecessary iterations of loop
        if (n%i == 0)
        {
            count ++ ;
            Cn = 1 ; // NUMBER IS  COMPOSITE
            count = 1;
            break;
        }
    }

    if(n == 1)
        cout<<"number is both prime and composite";

    else if (Cn == 1)
        cout<<"number is composite";

    else
        cout<<"number is prime ";

    cout<<"\nTotal loop iterations : "<<count ;

    return 0;
}