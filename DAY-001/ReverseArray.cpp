#include <iostream>
using namespace std;

// reverse the element of array.

void ReverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = 6;

    cout << "Before Reverse : " << endl;
    for (int item : arr)
    {
        cout << item << " ";
    }

    ReverseArray(arr, size);

    cout << endl
         << "after Reverse : " << endl;
    for (int item : arr)
    {
        cout << item << " ";
    }
    return 0;
}