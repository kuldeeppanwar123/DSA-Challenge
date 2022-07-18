#include <iostream>
using namespace std;
void MoveZeroes(int arr[], int size)
{
   // Time complexity - O(N^2)
   //Space complexity - O(1)
    

    int count = 0;
    for (int index = 0; index < size; index++)
    {

        if (arr[index] == 0)
        {
            for (int j = index + 1; j < size; j++)
            {
                arr[j - 1] = arr[j];
            }
            arr[size - 1] = 0;
            count++;
            if (arr[index] == 0 && index <= size - 1 - count)
                index--;
        }
    }
}

void MoveZeroes2(int arr[], int size)
{

     // Time complexity - O(N)                     optimized solution
     // Space complexity - O(1)

    int pointer = 0;
    for (int index = 0; index < size; index++)
    {
        if (arr[index] != 0)
        {
            swap(arr[index], arr[pointer]);
            pointer++;
        }
    }
}

int main()
{
    int arr[] = {0, 0, 0, 0, 0, 0, 0, 0, 50, 60};
    MoveZeroes2(arr, 10);

    for (int item : arr)
        cout << item << "  ";

    return 0;
}