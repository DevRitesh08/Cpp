#include<bits/stdc++.h>
using namespace std ;

printvec(vector<int> a) // pass by value to covert it to pass by reference just a --> &a .
{
    cout<<"size of vector : "<< a.size() << endl ;
    for(int i = 0 ; i < a.size() ; i++) // vector_name.size() --> used to get the size of vector and its time complexity is O(1) .
    {
        cout<< a[i] <<"  ";
    }
    cout<<endl;

}



// int main()
// {
//     vector<int> v;
//     int n ;
//     cout<<"enter a number : ";
//     cin>>n;
//     cout<<endl<<"enter elements of array : "<<endl;
//     for(int i = 0 ; i < n ; i++)
//     {
//         int x;
//         cin >> x;
//         printvec(v) ; // shows dynamic allocation of size

//         v.push_back(x) ; // It adds element at the last of a vector , time complexity O(1) .
//     }
//     printvec(v) ;
// }



// int main()
// {
//     // vector<int> v(10); // we can manually allocate size to a vector but stll it can be changed
//     //                    // and all the values will be zero if not specified
//     // // way to specify value
//     vector<int> v(10,5);// now all 10 spaces will be filled by 5 .

//     printvec(v) ;   

//     v.push_back(8);

//     printvec(v);

//     v.pop_back();// It removes last element from the pointer , time complexity O(1)  .

//     printvec(v);
// }



int main()
{
    
    vector<int> v;

    v.push_back(8);
    v.push_back(7);

    vector<int> v2 = v ; // vector v is copied to vector v2 , time complexity is O(n) .

    cout<<"vector v : ";
    printvec(v);
    cout<<endl<<endl;

    cout<<"vector v2 : ";
    printvec(v2);
    cout<<endl<<endl;


    v2.push_back(1);
    v2.push_back(2);
    v.push_back(4);
    v.push_back(5);

    cout<<"vector v : ";
    printvec(v);
    cout<<endl<<endl;

    cout<<"vector v2 : ";
    printvec(v2);
    cout<<endl<<endl;
}