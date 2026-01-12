#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;
class Solution {
public:
    int thirdMax(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        if(nums.size()==2)return max(nums[0],nums[1]);
        long first=LONG_MIN;
        long second=LONG_MIN;  // Long min used bcoz INT_MIN can be present in vector , and it can be valid answer
        long third=LONG_MIN;     
        for (int num:nums)
        {
            if(first==num || second==num || third==num) continue;
            if(num>first)
            {
                third=second;
                second=first;
                first=num;
            }
            else if(num>second)
            {
                third=second;
                second=num;
            }
            else if(num>third)
            {
                third=num;
            }
        }
        return (third==LONG_MIN?first:third);
    }
};
int main()
{
    Solution s1;
    vector<int>q={1,2,3,4};
    cout<<"Third Maximum number in vector : "<<s1.thirdMax(q);
    return 0;
}