#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    void solve(int index,vector<int>&candidates,int target,vector<int>&temp,vector<vector<int>>&ans)
    {
        if(target==0)
        {
            ans.push_back(temp);
            return;
        }
        for(int i=index;i<candidates.size();i++)
        {
            if(candidates[i]>target)break;

            temp.push_back(candidates[i]);
            solve(i,candidates,target-candidates[i],temp,ans);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>temp;
        sort(candidates.begin(),candidates.end());

        solve(0,candidates,target,temp,ans);
        return ans;
    }
};