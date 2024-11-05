
#include <bits/stdc++.h> // Include all standard libraries
using namespace std;

int main()
{
    // Initialize the vector with some elements
    vector<int> v = {2, 3, 5, 6, 8};

    // Index-based iteration to print elements
    cout << "Using index-based iteration:" << endl;
    for(int i = 0; i < v.size(); i++) // always use it++ instead of it + 1 , as in case of graphs it + 1 will give us error as there elements are not stored continously ,therefoere use it++ as it points to the next iterator (element) not next address .
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // Iterator-based iteration to print elements
    cout << "Using iterator-based iteration:" << endl;
    vector<int>::iterator it = v.begin(); // begin() points to the first element of the vector

    // Iterate using the iterator
    for(it = v.begin(); it != v.end(); it++)// end() points to the first element after the end of the vector
    {
        cout << (*it) << endl; // Dereference the iterator to access the element
    }

    return 0;
}
