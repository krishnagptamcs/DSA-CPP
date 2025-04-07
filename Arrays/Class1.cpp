#include <iostream>
using namespace std;

int main()
{
    // cout << "Hello krishna welcome back" << endl;
    // int n;
    // cout <<"Enter the number you want" << endl;
    // cin>>n;

    // cout << "The input number is " << n << endl;

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;

    int key = 1;

    bool flag = 0;
    // take for changing value

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            flag = 1;
        }
    }

    if (flag)
    {
        cout << "Present" << endl;
    }
    else
    {
        cout << "Absent" << endl;
    }

    return 0;
}