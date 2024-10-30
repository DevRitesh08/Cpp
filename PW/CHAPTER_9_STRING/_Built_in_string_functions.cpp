#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s = "ritesh";
    cout<<s<<endl;

    // s.append(" swami");// to add string at last
    // cout<<s<<endl;


    // // PLUS OPERATOR (can be used in both front and back)
    // s = s + " swami"; 
    // cout<<s<<endl;
    // s = "i am " + s ;
    // cout<<s<<endl;


    // s.pop_back();// to delete last character of string
    // cout<<s<<endl;


    // s.push_back('u'); // to add character at last
    // cout<<s<<endl;
    // s.push_back(' ');
    // s.push_back('s');
    // cout<<s<<endl;


    // cout<<s<<" "<<" string length : "<<s.length()<<endl;
    // s.clear();  // deletes whole string
    // cout<<s<<" "<<"string length : "<<s.length()<<endl;


    // // to_str --> converts integer to string
    // int x = 23352;
    // string h = to_string(x);
    // h = h + "hi" + "ji" ;
    // cout<<h<<endl ;


    // stoi --> converts string to integer
    string str = "1344323";
    int x = stoi(str);
    cout<<x+1<<endl;

}