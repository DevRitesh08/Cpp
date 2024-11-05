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
    cout << "Enter the number of rows: ";
    cin >> N; // Number of rows

    vector<vector<int>> v(N); // Vector of vectors with N rows
    cout << "Now, enter the elements for each row:" << endl;

    // Input each row
    for(int i = 0; i < N; i++)
    {
        int n;
        cout << "Enter the number of elements in row " << i + 1 << ": ";
        cin >> n; // Number of elements in the current row

        v[i] = vector<int>(n); // Resize the current row to have n elements
        cout << "Enter " << n << " elements for row " << i + 1 << ": ";
        for(int j = 0; j < n; j++)
        {
            cin >> v[i][j]; // Input each element
        }
    }

    cout << "\nPrinting all vectors:" << endl;
    // Print each row
    for(int i = 0; i < N; i++)
    {
        cout << "Row " << i + 1 << ": ";
        printvec(v[i]);
    }

    // Example of accessing an element
    cout << "\nExample of accessing an element:" << endl;
    if (N > 0 && v[0].size() > 1)
    {
        cout << "The second element of the first row is: " << v[0][1] << endl;
    }
    else
    {
        cout << "The second element of the first row does not exist." << endl;
    }

    return 0;
}
