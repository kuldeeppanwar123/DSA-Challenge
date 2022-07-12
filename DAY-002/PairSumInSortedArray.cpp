#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int Countpair(int arr[], int size, int sum)
    {
        int maxsum = arr[size - 1] + arr[size - 2];
        int minsum = arr[0] + arr[1];

        if (maxsum < sum || minsum > sum)
            return -1;

        int low = 0;
        int high = size - 1;
        int count = 0;

        while (low < high)
        {
            int findsum = arr[low] + arr[high];
            if (findsum == sum)
            {
                count++;
                low++;
                high--;
            }
            else if (findsum < sum)
            {
                low++;
            }
            else if (findsum > sum)
            {
                high--;
            }
        }

        return (count == 0) ? -1 : count;
    }
};

int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7};
    int size = 8;
    int sum = 8;
    Solution obj;
    cout << obj.Countpair(arr, size, sum) << endl;

    return 0;
}
