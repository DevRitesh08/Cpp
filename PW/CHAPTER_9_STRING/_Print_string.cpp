#include<iostream>
using namespace std ;
int main()
{
   string s = "ritesh swami";
   // cout<<s;

   int n = s.size();//OR int n = s.length(); 
   for(int i = 0 ; i  < n ; i++)
   {
      cout<<s[i];
   }
}