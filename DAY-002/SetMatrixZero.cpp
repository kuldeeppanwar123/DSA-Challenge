#include <iostream>
#include <bits/stdc++.h>
using namespace std;

//Given a matrix if an element in the matrix is 0 then you will have to set its entire column and row to 0 and then return the matrix.

void SetZeroes(vector<vector<int>> &matrix)
{
    int rowsize = matrix.size();
    int colsize = matrix[0].size();

    vector<int> RowArray(rowsize, -1);
    vector<int> ColArray(colsize, -1);

    for (int row = 0; row < matrix.size(); row++)
    {
        for (int col = 0; col < matrix[row].size(); col++)
        {
            if (matrix[row][col] == 0)
            {
                RowArray[row] = 0;
                ColArray[col] = 0;
            }
        }
    }

    for (int row = 0; row < matrix.size(); row++)
    {
        for (int col = 0; col < matrix[row].size(); col++)
        {
            if (RowArray[row] == 0 || ColArray[col] == 0)
            {
                matrix[row][col] = 0;
            }
        }
    }
}

int main()
{
    vector<vector<int>> matrix = {{1, 0, 1}, {1, 1, 1}, {1, 1, 1}};

    SetZeroes(matrix);
    for (int row = 0; row < matrix.size(); row++)
    {
        for (int col = 0; col < matrix[row].size(); col++)
        {
            cout << matrix[row][col] << "  ";
        }
        cout << endl;
    }

    return 0;
}