#include<bits/stdc++.h>
using namespace std ;

printvec(vector<pair<int,int>> &a) 
{
    cout<<"size of vector : "<< a.size() << endl ;
    for(int i = 0 ; i < a.size() ; i++) 
    {
        cout<< a[i].first <<"  "<<a[i].second<<endl;
    }
    cout<<endl;

}



// int main()
// {
//     vector<pair<int , int>> v = {{1,2},{2,3},{3,4}};
//     printvec(v) ;
// }



// vector input

// example
// size of vector : 0

// enter n : 
// 3
// 1 2 2 3 3 4
// size of vector : 3
// 1  2
// 2  3
// 3  4

int main()
{
    vector<pair<int , int>> v ;
    printvec(v) ;
    int n;
    cout<<"enter n : "<<endl;
    cin>>n;
    for(int i = 0 ; i < n ; i++)
    {
        int x,y ;
        cin>> x >> y ;
        v.push_back({x,y}); // OR v.push_back(make_pair(x,y));
    }
    printvec(v);
}