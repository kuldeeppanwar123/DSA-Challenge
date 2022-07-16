#include<iostream>
#include<vector>
using namespace std;
void SpiralMatrix(vector<vector<int>>&matrix)
{
	int top,bottom , left , right;
	top = left = 0;
	bottom =  matrix.size()-1;
    right =  matrix[0].size()-1;
	while((left<=right) && (top<=bottom))
	{
		for(int col = left; col<=right; col++)
	        cout<<matrix[top][col]<<" ";
		    top++;
		
		for(int row = top; row<=bottom; row++)
		    cout<<matrix[row][right]<<" ";
			right--;
     
	 if(top<=bottom)
	 {
		for(int col = right; col>=left; col--)
		    cout<<matrix[bottom][col]<<" ";
			bottom--;
	 }

	 if(left<=right)	   
	 {
		for(int row = bottom; row>=top; row--)
		    cout<<matrix[row][left]<<" ";
			left++;
	 }
	}
}
int main(){
	vector<vector<int>>matrix = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12}
	};

	SpiralMatrix(matrix);
	return 0;
}