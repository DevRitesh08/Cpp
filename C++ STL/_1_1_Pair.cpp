// #include <bits/stdc++.h> is a header file in C++ that includes most of the standard C++ libraries. 
// It is a shorthand for including a wide range of libraries used for competitive programming, 
// as it saves time by including commonly used headers like <iostream>, <vector>, <algorithm>, <map>, 
// and others in a single line. However, this header file is non-standard and may not be supported 
// in some compilers outside of the competitive programming environment, so it's better to use 
// explicit headers in professional or large-scale projects.

#include<bits/stdc++.h>

using namespace std;
int main()
{
    pair< int , string > p ; // there can be any data type , container in the < > . "p" is the name of the variable .
    
    // Initialization

    // method-1
    //p = make_pair( 3 , "ritesh");

    // method-2
    p = {3 , "ritesh"};

    cout << p.first <<"  "<<p.second << endl;


    // // value of pair p is copied in p1 (pass by value)
    // pair<int ,string > p1 = p;
    // p1.first = 71 ;
    // p1.second = "swami";
    // cout << p1.first <<"  "<<p1.second << endl;
    // cout << p.first <<"  "<<p.second << endl;


    // // address of pair p is passed to p1 (pass by reference)
    // pair<int ,string > &p1 = p; // remember & sign is with p1 not p
    // p1.first = 71 ;             // follow the same process only
    // p1.second = "swami";
    // cout << p1.first <<"  "<<p1.second << endl;
    // cout << p.first <<"  "<<p.second << endl;


    // Basically Pairs are used to maintain relation between two things .
    int arr[] = {1,2,3};
    int brr[] = {4,5,6};
    pair<int , int> p_array[3]; // pairs will maintain a relation as when arr[0] element is swapped with arr[2] 
    p_array[0] = {1,4};         // same will happen with brr as its elements are in pair with the elements of arr .
    p_array[1] = {2,5};
    p_array[2] = {3,6};
    swap(p_array[0] , p_array[2]);
    //array print
    for(int i = 0 ; i < 3 ; i++)
    {
        cout<<p_array[i].first<<"  "<<p_array[i].second<<endl;
    }
}