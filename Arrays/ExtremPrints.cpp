#include <iostream>
using namespace std;

int main()
{

    int arr[8] = {10, 20, 30, 40, 50, 60, 70, 90};

    int size = 8;

    // Array index start with 0
    int start = 0;

    int end = size - 1;

    while (true)
    {
        // If start surpass the end then break
        if (start > end)
        {
            break;
        }

        if (start == end)
        {
            cout << arr[start] << " ";
        }
        else
        {

            cout << arr[start] << " ";
            cout << arr[end] << " ";
        }

        start++; 
        end--;
    }

    return 0;
}