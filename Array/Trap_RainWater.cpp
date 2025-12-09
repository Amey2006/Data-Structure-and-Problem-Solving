/*

To solve this problem we have following Approches:

Core approch : calculate each bar contain how much amount of water by using its left max and right max bar
 
This is calculated using

    -> first find maximum bar on left
    -> then find maximum bar on right 
    -> decide who is minimum between them
    -> water= minimum bar - height of that bar
    -> add all bar water level and return answer

1. Brute force approch
   In this approch we seprately calculate lmax and rmax using loop for every element while traveling the loop
   
2. Better approch
   In this approch we create two array namely lmax and rmax
   lmax contains -> left max values for all elements in array
   rmax contains -> right max values for all elements in array

3. Best/ optimal approch (two pointer approch)
   l =  left pointer 
   r =  right pointer
   In this approch we calculate lmax and rmax in the loop 
   if lmax is less then calulate water level lmax - height of left bar  then increase left value
   if rmax is less then calulate water level rmax - height of right bar  then decrease right value

*/





#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
        int lmax=0;
        int rmax=0;
        int l=0;
        int r=height.size()-1;
        int ans=0;
        while(l<r)
        {
            lmax=max(lmax,height[l]);
            rmax=max(rmax,height[r]);

            if(lmax<rmax)
            {
                ans=ans+(lmax-height[l]);
                l++;
            }
            else
            {
                ans=ans+(rmax-height[r]);
                r--;
            }
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int>height={1,2,1,1,1,0,2};
    int ans=s.trap(height);
    cout<<ans;
    return 0;
}