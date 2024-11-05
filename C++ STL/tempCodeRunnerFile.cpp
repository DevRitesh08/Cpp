#inclue<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v ={2,3,5,6,8};
    for(int i = 0 ; i < v.size() ; i++)
    {
        cout << v[i]  << "  ";
    }
    cout << endl;
    vector<int> :: iterator it = v.begin(); //begin() points to the first element of the vector. 
    for(it = v.begin() ; it != v.end() ; it++)// always use it++ instead of it + 1 , as in case of graphs it + 1 will give us error
    {                                          // as there elements are not stored continously ,therefoere use it++ as it points to the next element not next address .
    cout << (*it) << endl;

    }


}