// QUESTION : Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a while loop.

#include<iostream>
using namespace std;
int main()
{
    char ch = 65 ;
    int i = 65;
    
    while ( i < 91)
    {
        //cout<<" "<< i <<" "<<ch<<"\n\n" ;
        cout<<" "<< i <<" "<<(char) i<<"\n\n" ; // with typecating no need to use ch .

        i++;
        ch++;
    }

    return 0 ;
}