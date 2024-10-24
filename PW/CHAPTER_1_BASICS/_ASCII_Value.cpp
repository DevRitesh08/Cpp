#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number to find its ASCII character : ";
    cin>>n;
    cout<<"the character at ASCII value  "<< n <<" is : "<<(char)n;// typecasting
    return 0;
}