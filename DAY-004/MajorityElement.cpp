#include <iostream>
using namespace std;
int MajorityElement(int arr[], int size)
{
    int Element = 0;
    int Count = 0;

    for (int i = 0; i < size; i++)
    {
        if (Count == 0)
            Element = arr[i];

        if (Element == arr[i])
            Count++;

        else
            Count--;
    }
    Count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == Element)
            Count++;
    }

    return (Count > size / 2) ? Element : -1;
}
int main()
{
    int arr[] = {2, 5, 2, 1, 2};
    int size = 5;
    cout << MajorityElement(arr, size);
    return 0;
}