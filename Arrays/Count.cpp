#include <iostream>
using namespace std;

int main()
{
    int arr[] = {0, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 1, 0, 1};

    int size = 25;

    // we nee to count 0 & 1 , so we make a variable with
    int numZero = 0;
    int numOne = 0;

    for (int i = 0; i < size; i++)
    {
        // If zero found , increment num zero
        if (arr[i] == 0)
        {
            numZero++;
        }
        // If one found increment the number
        if (arr[i] == 1)
        {
            numOne++;
        }
    }

    cout << "The number of zero is" << numZero << endl;
    cout << "The number of one is " << numOne << endl;
}