#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();

        vector<int>ans;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        int p1=0;
        int p2=0;
        while(p1<m && p2<n)
        {
            int no1=nums1[p1];
            int no2=nums2[p2];
            if(no1==no2)
            {
                ans.push_back(nums1[p1]);
                while(p1<m && nums1[p1]<=no1)p1++;
                while(p2<n && nums2[p2]<=no2)p2++;
            }
            else if(no2<no1)
            {
                while(p2<n && nums2[p2]<no1)p2++;
            }
            else if(no1<no2)
            {
                while( p1<m && nums1[p1]<no2 )p1++;
            }
        }
        return ans;
    }
};