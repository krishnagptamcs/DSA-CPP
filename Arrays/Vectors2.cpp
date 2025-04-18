#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> arr{1, 2, 3, 4, 5, 6, 8};
    vector<int> brr{3, 3, 4, 5, 10};

    vector<int> ans;

    // We need to find the number who is present in both arrays
    // Loop first on each elem of 1st array
    for (int i = 0; i < arr.size(); i++)
    {
        int element = arr[i];

        // Then taking eleme of first elem , match this elem with another arrays elem
        for (int j = 0; j < brr.size(); j++)
        {
            if (element == brr[j])
            {

                ans.push_back(brr[j]);
                break;
            }
        }
    }

    // print ans
    for (auto value : ans)
    {
        cout << value << " ";
    }

    return 0;
}
