#include <iostream>
using namespace std;

int main()
{
    // Half pyramid
    // outer loop
    int n;
    cin >> n;

    for (int row = 0; row < n; row++)
    {
        // inner loop
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}