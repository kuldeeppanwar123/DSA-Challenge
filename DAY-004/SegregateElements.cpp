#include <iostream>
using namespace std;

void PosNeg(int arr[], int size)
{
    int PosArr[size];
    int NegArr[size];

    int PosIndex = 0;
    int NegIndex = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            NegArr[NegIndex] = arr[i];
            NegIndex++;
        }
        if (arr[i] > 0)
        {
            PosArr[PosIndex] = arr[i];
            PosIndex++;
        }
    }
    int index = 0;
    int MIndex = 0;
    while (index < PosIndex)
    {
        arr[MIndex] = PosArr[index];
        MIndex++;
        index++;
    }

    index = 0;
    while (index < NegIndex)
    {
        arr[MIndex] = NegArr[index];
        MIndex++;
        index++;
    }
}
int main()
{
    int arr[] = {1, -1, 3, 2, -7, -5, 11, 6};
    int size = 8;
    PosNeg(arr, size);
    for (int item : arr)
        cout << item << " ";
    return 0;
}