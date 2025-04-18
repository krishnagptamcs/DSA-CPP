#include <iostream>
#include <vector>
using namespace std;

// Intialising the function
int findUnique(vector<int> arr)
{
    // intilaiseing with 0 does not effect on xor
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        //^ this is an xor operator which , check 1^1 then it cancel out value ,
        // If 2^3 then it not cancel out the value
        // Using XOR logic to find the unique element (perfect for arrays where all elements appear twice except one).
        ans = ans ^ arr[i];
    }

    return ans;
}

int main()
{
    // To find unique element in an arry using vector
    int n;
    cout << "Enter the number" << endl;
    cin >> n;

    // intialising the vector
    vector<int> arr(n);
    // taking input
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    int uniqueElement = findUnique(arr);

    cout << "Unique Element is" << uniqueElement << endl;

    return 0;
}