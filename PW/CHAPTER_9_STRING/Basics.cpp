#include<iostream>
using namespace std ;
int main()
{
    // string s = "ritesh swami";
    // cout<<s;

    // string s;
    // cout<<"enter a string : ";
    // //problem of cin
    // cin>>s; // this will only print the first word of the string .
    // cout<<s; 

    // string s;
    // cout<<"enter a string : ";
    // // solution of cin
    // getline(cin,s); // important !!!!!!!!!
    // cout<<s;  



    // string indexing is used to update , access
    string s = "ritesh swami";
    cout<<s<<endl;
    s[0] = 'g';
    cout<<s<<endl;
    cout<<s[5];


    return 0;

}