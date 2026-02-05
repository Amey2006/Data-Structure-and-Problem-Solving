#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_ones=0;
        int current=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                current++;
            }
            if(nums[i]==0)
            {
                current=0;
            }
            max_ones=max(max_ones,current);
        }
        return max_ones;
    }
};