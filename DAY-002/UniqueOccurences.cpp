#include<iostream>
#include<vector>
#include<utility>

//check the occurrences of all the elements and if the occurrences of all the elements are unique then return true else false.

using namespace std;

vector<pair<int , int>> CheckOccurrences(vector<int> arr , int size)
{
    vector<pair<int , int>>ans;
    int count =0;
    bool check = false;

    for(int i=0; i<size; i++)
    {
        for(int j=0; j<ans.size(); j++)
        {
            if(arr[i] == ans[j].first)
            {
                check=true;
            }
        }

        if(check==true)
        {check=false;
        continue;
        }
 
        count =1;
        for(int j=i+1; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        pair<int ,int>tempans = make_pair(arr[i] , count);
        ans.push_back(tempans);
    }
   return ans;
}
    
    
    
    bool UniqueOccurrences(vector<int>arr , int size)
{
   vector<pair<int , int>> ans = CheckOccurrences(arr , size);
   for(int i =0; i<ans.size(); i++)
   {
    for(int j=i+1; j<ans.size(); j++)
    {
        if(ans[i].second==ans[j].second)
        {
            return false;
        }
    }

   }
    return true;
}
int main(){
    vector<int>arr = {1,2,5,2,1,1};
    int size = 6;
    bool ans = UniqueOccurrences(arr ,6);
    cout<<ans<<endl;
    
    return 0;
}