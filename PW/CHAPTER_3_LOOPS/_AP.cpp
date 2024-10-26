// ap --> 1,3,5,7,9,......n

#include<iostream>
using namespace std;
int main()
{
    int x;
    cout << "Enter the number of terms to print of the above AP : ";
    cin >> x ;
    
    cout<<"N terms of AP are : " ;
    int count = 1;
    for(int i = 1 ; i <= x ; i ++ , count += 2)
    {
        cout << count << "\t";    
    }

    // to find nth term of given ap :
    int n , nth , d = 2 , a = 1;
    cout << "\nEnter the nth of term to find : ";
    cin >> n ;

    nth = a + (n - 1)*d ;
    cout <<"the " << n << " term is " << nth;    

    return 0;
}

