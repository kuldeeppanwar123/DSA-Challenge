#include<iostream>
using namespace std;

void Sort1(int arr[] , int size)
{
    int start =0;
    int end =size-1;

    while(start<end)
    {
        if(arr[end]==2)
        {
            end--;
        }

        else{
            if(arr[start]==2)
            {
                swap(arr[start] , arr[end]);
                start++;
                end--;
            }
            else if(arr[start]!=2)
            {
                start++;
            }
        
        }
    }

    start=0;
    end = end;
    while (start<end)
    {
         if(arr[start]==1 && arr[end]==0)
         {
            swap(arr[start] , arr[end]);
         }
         
         else if(arr[start]==0)
         {
            start++;
         }

         else if(arr[end]==1)
         {
            end--;
         }
    }
    
}
void Sort2(int arr[] , int size)
{
    int ZeroCount =0;
    int OneCount =0;
    int TwoCount = 0;

    for(int i=0; i<size; i++)
    {
        if(arr[i]==0)
        ZeroCount++;

        else if(arr[i]==1)
        OneCount++;

        else if(arr[i]==2)
        TwoCount++;
    }
    OneCount+=ZeroCount;
    TwoCount+=OneCount;

    for(int i=0; i<size; i++)
    {
        if(i>=0 && i<ZeroCount)
        arr[i] =0;

        else if(i>=ZeroCount && i<OneCount)
        arr[i] = 1;

        else if (i>=OneCount && i<TwoCount)
        arr[i] = 2;
        
    }

}

//Optimized sorting 
void Sort(int arr[] , int size)
{
    int low ,mid , high;
    low = mid = 0;
    high = size-1;

    while(mid <= high)
    {
      if(arr[mid]==0)
      {
        swap(arr[mid] , arr[low]);
        mid++;
        low++;
      }
      else if(arr[mid]==1)
      {
        mid++;
      }
      else if(arr[mid]==2)
      {
        swap(arr[mid] , arr[high]);
        high--;
      }
    }
}

int main(){
    int arr[] = {2,1,2,1,0,0,0,1};
    int size = 8;

     Sort(arr , size);

     for(int item:arr)
     {
        cout<<item<<"  ";
     }
    return 0;
}