#include <iostream>
using namespace std;

int main()
{
    int arr[8] = {10, 20, 30, 40, 50, 60, 70, 80};
    int size = 8;

    // Take the start and end point
    int start = 0;
    int end = size - 1;

    // swaping the array
    // Check the start should always less than end
    while (start <= end)
    {

        // swap the array
        swap(arr[start], arr[end]);
        // After swap increse the start
        start++;
        // Decrease the end point
        end--;
    }

    // Priting thr array after swap
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}