#include<iostream>
#include<vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer;
        int product = 1, i;

        for(i = 0; i < nums.size(); i++){
            answer.push_back(product);
            product *= nums[i];
        }

        product = 1;
        for(i = nums.size() - 1; i >= 0; i--){
            answer[i] *= product;
            product *= nums[i];
        }

        return answer;
    }

    int main()
    {
        vector<int>arr = {0,1,2};
        vector<int>ans = productExceptSelf(arr);

        for(int item:ans)
        cout<<item<<"  ";
    }