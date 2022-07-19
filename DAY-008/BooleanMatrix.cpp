#include<iostream>
#include<vector>
using namespace std;


void BooleanMatrix(vector<vector<int>>&matrix)
{
    int NoOfRows = matrix.size();
    int NoOfCols = matrix[0].size();
    vector<int>TempRow(NoOfRows ,0);
    vector<int>TempCol(NoOfCols , 0);

    for(int row = 0; row<NoOfRows; row++)
    {
        for(int col =0; col<NoOfCols; col++)
        {
            if(matrix[row][col]==1)
            {
                TempRow[row]=1;
                TempCol[col]=1;
            }

        }
    }
    for(int row = 0; row<NoOfRows; row++)
    {
        for(int col =0; col<NoOfCols; col++)
        {
            if(TempRow[row]==1 || TempCol[col]==1)
            {
                matrix[row][col]=1;
            }

        }
    }
}
int main(){
    vector<vector<int>>matrix = {
        {1,0,0},
        {0,0,0},
        {0,0,0}
    };
    BooleanMatrix(matrix);

    for(vector<int>Array:matrix)
    {
        for(int item:Array)
        {
            cout<<item<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}