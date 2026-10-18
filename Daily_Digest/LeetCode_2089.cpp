class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int smaller=0;
        int total_target=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<target)   smaller++;
            if(nums[i]==target)  total_target++;

        }
        vector<int>ans;
        while(total_target)
        {
            ans.push_back(smaller++);
            total_target--;
        }
        return ans;

    }
};