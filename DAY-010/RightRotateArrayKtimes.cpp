#include <iostream>
#include <vector>
using namespace std;
// Input:  [1,2,3,4,5,6,7], k = 3
// Output: [5,6,7,1,2,3,4]

void Rotate(vector<int> &arr, int k)
{
    k%=arr.size();
    int start, end;

    start = 0;
    end = arr.size() - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    start = 0;
    end = k - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    start = k;
    end = arr.size() - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    Rotate(arr, 3);

    for (int item : arr)
        cout << item << "  ";
    return 0;
}