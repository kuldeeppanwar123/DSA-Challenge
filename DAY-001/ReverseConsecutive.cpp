#include<iostream>
using namespace std;

void ReverseConsecutiveElements(int arr[] , int size)
{
    for(int index =0; index<size; index = index+2)
    {
        if(index+1<size)
        {
            swap(arr[index] , arr[index+1]);
        }
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int size = 7;

    cout<<"Before Consecutive Swap : "<<endl;
    for(int item : arr)
    {
        cout<<item<<" ";
    }

    ReverseConsecutiveElements(arr , size);

    cout<<endl<<"After Consecutive Swap : "<<endl;
    for(int item : arr)
    {
        cout<<item<<" ";
    }

    return 0;
}