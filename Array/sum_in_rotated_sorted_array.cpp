#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
class Solution
{
    public:
    vector<int> findsum(vector<int> nums,int target)
    {
        vector<int>ans;
        int n=nums.size();
        int high=-1;
        int low=-1;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i+1]<nums[i])
            {
                low=i+1;
                high=i;
                break;
            }
        }
        cout<<"High : "<<nums[high]<<endl;
        cout<<"Low : "<<nums[low]<<endl;
        while(high!=low)
        {
            int sum=nums[high]+nums[low];
            if(sum==target)
            {
                ans.push_back(nums[high]);
                ans.push_back(nums[low]);
                cout<<"Element one : "<<nums[high]<<endl;
                cout<<"Element two : "<<nums[low]<<endl;
                return ans;
            }
            else if(sum>target)
            {
                high=(high-1+n)%n;
            }
            else if(sum<target)
            {
                low=(low+1+n)%n;
            }
        }
        return ans;
    }
};
int main()
{
    vector<int>arr={22,27,1,8,17};
    int target=23;
    Solution s;
    vector<int>ans=s.findsum(arr,target);
    if(ans.size()==0) cout<<"Pair not exits";
    return 0;
}