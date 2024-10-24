#include<iostream>
using namespace std;
int main()
{
    float si;
    int prin,roi,time;
    cout<<"enter the principal amount , rate of intrest and time duration ";
    cin>>prin>>roi>>time;// can't use endl here

    si = prin*roi*time/100;
    cout<<"the simple intrest is : "<< si;
}