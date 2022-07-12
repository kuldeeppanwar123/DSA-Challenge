#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>PascalsTriangle(int size)
{
    vector<vector<int>>res(size);
    for(int row =0; row<size; row++)
    {
        res[row].resize(row+1);
        res[row][0] = res[row][row] =1;

        for(int col=1; col<row; col++)
        {
           res[row][col] = res[row-1][col-1]+res[row-1][col]; 
        }
    }    
    return res;
}
int main(){

    vector<vector<int>>ans(5);
    ans = PascalsTriangle(5);
    for(vector<int>RowItem:ans)
    {
        for(int item:RowItem)
        {
            cout<<item<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}