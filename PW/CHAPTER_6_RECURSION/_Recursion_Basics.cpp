// ERROR !! this will create an infinite loop

// #include<iostream>
// using namespace std ;

// void greet()
// {
//     cout<<"hey"<<endl;
//     greet();
// }

// int main()
// {
//     greet();
//     return 0;
// }






#include<iostream>
using namespace std;

void greet(int x)
{
    if(x == 0 )
        return ;
    
    cout<<"hey\n";
    greet(x-1);

}

int main()
{
    int n;
    cout<<"enter a number : ";
    cin>>n;
    greet(n);
    cout<<"done";

    return 0;
}