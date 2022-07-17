#include<iostream>
using namespace std;
int FindSecondLargest(int*A , int n)
{
     int Largest = 0;
    int SecondLargest=-1;
    for(int i=1; i<n; i++)
    {
        if(A[i]>A[Largest])
        {
            SecondLargest = Largest;
            Largest = i;
        }

        else if(A[i]!=A[Largest])
        {
            if(SecondLargest==-1 || A[i]>A[SecondLargest])
            {
                SecondLargest=i;
            }
        }
    }
    return A[SecondLargest]?A[SecondLargest]:-1;
}
int main(){
    int*arr{new int[6]{5,20,12,20,4,13}};
    int index = FindSecondLargest(arr , 6);
    cout<<index<<endl;
    return 0;
}