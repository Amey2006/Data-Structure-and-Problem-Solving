#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0;
        int mid;
        int r=nums.size()-1;
      
        if(nums[l]<nums[r]) return nums[l];

        while(l<r)
        {
            cout<<"sum = "<<(l+r)<<endl;
            mid=(l+r)/2;
            cout<<"Mid = "<<mid<<endl;
            cout<<"MidPoint = "<<nums[mid]<<endl;
           
            if(nums[mid]>nums[r] )
            {
                cout<<nums[mid]<<">"<<nums[r]<<endl;
                l=mid+1;
                cout<<"left is now "<<l<<endl;
                cout<<"right is now "<<r<<endl;

            }
            else if(nums[mid]<nums[r] )
            {
                cout<<nums[mid]<<"<"<<nums[r]<<endl;
                r=mid;
                cout<<"left is now "<<l<<endl;
                cout<<"right is now "<<r<<endl;
            }
            else if(nums[mid]==nums[r]){
                r--;
                cout<<"left is now "<<l<<endl;
                cout<<"right is now "<<r<<endl;
            }
          
        }
        return nums[l];
    }
};
int main()
{
    Solution s;
    vector<int>height={1,2,1,1,1,0,2};
    int ans=s.findMin(height);
    cout<<ans;
    return 0;
}