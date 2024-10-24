#include<iostream>
using namespace std;
int main()
{
    // int x = 7 , y = 4 ;
    // cout<< x+y << endl;
    // cout<< x-y << endl;
    // cout<< x*y << endl;
    // cout<< x/y << endl;// why 1 ?? as both x and y are integers
    // cout<< (float)x/y << endl; // type casting

    float x = 7.73 , y = 4.039 ,z = 9.7382 ;
    cout<< x+y << endl;
    cout<< x-y << endl;
    cout<< x*y << endl;
    cout<< x/y << endl;// no issue as both x and y are float but we need only one of them to be float to get a float output .
    cout<< "value of z is : " << z << endl;


    return 0;
}