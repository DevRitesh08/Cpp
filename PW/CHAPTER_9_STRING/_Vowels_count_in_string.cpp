#include<iostream>
using namespace std ;
int main()
{
   string s = "revise quickly bro don't waste time !";
   int n = s.length();
   int count = 0 ; 
   for(int i = 0 ; i  < n ; i++)
   {
      if( s[i]== 'a' ||  s[i]== 'e' ||  s[i]== 'i' ||  s[i]== 'o' ||  s[i]== 'u' )
        count++;
   }
   cout<<"vowels are : "<<count;
}