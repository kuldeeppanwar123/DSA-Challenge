#include <iostream>
using namespace std;

int FindUniqueNumber(int arr[], int size)
{
    int ans = 0;
    for (int index = 0; index < size; index++)
    {
        //XOR of two same numbers is zero.    EX: 2^2 =0
        //XOR of any number with zero is that number only.    EX: 2^0 = 2
        ans = ans ^ arr[index];
    }

    return ans;
}
int main()
{
    // in array all the elements will be twice except one element. that unique number we have to find out.
    int arr[] = {1, 5, 2,  2, 1};
    int size = 5;
    int ans = FindUniqueNumber(arr, size);
    cout<<ans<<endl;
    return 0;
}