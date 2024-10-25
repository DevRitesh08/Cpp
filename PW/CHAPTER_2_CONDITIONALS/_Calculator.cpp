#include<iostream>
using namespace std ;
int main()
{
    int p,q;
    char ch ;
    ch ='y';
    
    while(ch == 'y')
    {

    cout <<"\nenter two numbers :";
    cin >> p >> q ;
    cout<<"choose operation to perform +,-,*,/ :";
    cin >> ch;

    switch(ch)
    {
        case '+':
            cout<< " the sum of " << p <<" and "<<q <<" is " << p+q ;
            break;
        case '-':
            cout<< " the subtraction of " << p <<" and "<<q <<" is " << p-q ;
            break;
        case '*':
            cout<< " the multiplication of " << p <<" and "<<q <<" is " << p*q ;
            break;
        case '/':
             cout<< " the division of " << p <<" and "<<q <<" is " << (float)p/q ;// typecasting is important to get proper division
            break;
        default:
            cout<<"invalid choice ! ";
            
    }

    cout << "\nstill want to continue : y/n ";
    cin >> ch ;
    }

return 0;;

}