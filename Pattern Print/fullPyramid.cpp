#include <iostream>
using namespace std;

int main()
{
    // full Pyramid printing
    //      *
    //     * *
    //    * * *
    //   * * * *
    //  * * * * *

    int n;
    cin >> n; // for input variable

    // outer loop
    for (int row = 0; row < n; row = row + 1)
    {
        // space
        for (int col = 0; col < n - row - 1; col = col + 1)
        {
            cout << " ";
        }

        // stars
        for (int col = 0; col < row + 1; col = col + 1)
        {
            cout << "* ";
        }

        // for moving to next line
        cout << endl;
    }

    return 0;
}