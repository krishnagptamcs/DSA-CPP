#include <iostream>
using namespace std;

int main()
{
    // Hollow rectangle
    for (int row = 0; row < 7; row = row + 1)
    {
        //print star for 1 & 2 rectangle
        if (row == 0 || row == 6)
        {
            for (int col = 0; col < 5; col++)
            {
                cout << "* ";
            }
        }
        else
        {
            // for middle space
            cout << "* ";
            // space
            for (int i = 0; i < 3; i=i+1)
            {
                cout << "  ";
            }

            cout << "* ";
        }
        //to move in next line
        cout<<endl;
    }
}