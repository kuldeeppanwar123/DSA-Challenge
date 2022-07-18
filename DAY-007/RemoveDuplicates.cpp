#include<iostream>
#include<vector>
#include<utility>

using namespace std;
pair<int* , int> RemoveDuplicates(int*arr , int size)
{

     // Time = O(n)
     // space = O(n)
   
    int *ans = new int[size];
    ans[0] = arr[0];
    int j=0;
    int NewSize = 1;
    for(int i=0; i<size; i++)
    {
      if(ans[j]!=arr[i])
      {
         j++;
         NewSize++;
         ans[j] = arr[i];
      }
    }
    pair<int* , int>anspair = make_pair(ans , NewSize);
    return anspair;
}


pair<int* , int> RemoveDuplicates2(int*arr , int size)
{    

     // Time = O(n)
     // space = O(1)

    int Res = 1;
    for(int i=1; i<size; i++)
    {
        if(arr[i]!=arr[Res-1])
        {
            arr[Res] = arr[i];
            Res++;
        }
    }
    pair<int* , int>anspair = make_pair(arr , Res);
    return anspair;
}

int main(){
    int *arr{new int[10]{10,10,10,20,20,30,30,40,40,50}};
   pair<int* , int>ans = RemoveDuplicates(arr , 10);

    int*AnsArray = ans.first;
    int size = ans.second;

    for(int i=0; i<size; i++)
    {
        cout<<AnsArray[i]<<"  ";
    }

    return 0;
}