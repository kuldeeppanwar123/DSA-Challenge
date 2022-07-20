#include<bits/stdc++.h>
using namespace std;

//Kadane's algorithm is for finding maximum sub array sum.
long long MaxSubArraySum(int arr[] , int size)
{
     int MaxSum = INT_MIN;
     int sum =0;
     for(int i=0; i<size; i++)
     {
        sum+=arr[i];
        MaxSum = max(MaxSum , sum);
        if(sum<0)
        {
            sum=0;
        }
     }
    
     return MaxSum;
}
int main(){
    int arr[] = {1,2,3,-2,5};
     long long ans = MaxSubArraySum(arr , 5);
     cout<<ans<<"  ";

    return 0;
}