#include <bits/stdc++.h>
using namespace std;

// Function to print a vector
void printvec(vector<int> &a) 
{
    cout << "size of vector: " << a.size() << endl;
    for(int i = 0; i < a.size(); i++) 
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int N;
    cout << "Enter the fixed number of rows: ";
    cin >> N; // Number of rows

    vector<int> v[N]; // Array of vectors with N rows
    cout << "Now, enter the elements for each row:" << endl;

    // Input each row
    for(int i = 0; i < N; i++)
    {
        int n;
        cout << "Enter the number of elements in row " << i + 1 << ": ";
        cin >> n; // Number of elements in the current row

        cout << "Enter " << n << " elements for row " << i + 1 << ": ";
        for(int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x); // Add element to the current row
        }
    }

    cout << "\nPrinting all vectors:" << endl;
    // Print each row
    for(int i = 0; i < N; i++)
    {
        cout << "Row " << i + 1 << ": ";
        printvec(v[i]);
    }

    return 0;
}
