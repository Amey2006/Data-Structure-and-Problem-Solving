#include<iostream>
#include<vector>
#include<unordered_map>// <---------Hashmap 
using namespace std;
class Solution
{
    public:
    vector<int> find_unique_elements(vector<int>nums,int n)
    {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[nums[i]]++;
        }
        // for(auto it:mp)
        // {
        //     cout<<"key = "<<it.first<<"     Value = "<<it.second<<endl;
        // }
        for(int i=0;i<n;i++)
        {
            if(mp[nums[i]]==1) ans.push_back(nums[i]);
        }
        return ans;
    }
};
int main()
{
    vector<int>arr={1,2,1,3,3,4,5,6,7,4};
    Solution s;
    vector<int>ans=s.find_unique_elements(arr,10);
    cout<<"Unique Elementa in array : "<<endl;
    for(int n:ans)
    {
        cout<<n<<",  ";
    }
    return 0;
}