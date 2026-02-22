// User function Template for C++
#include<vector>
using namespace std;
class Solution {
  public:
    int findCeil(vector<int>& arr, int x) {
        // code here
        int left=0;
        int right=arr.size()-1;
        int ans=-1;
        while(left<=right)
        {
            int mid=left+(right - left)/2;
           if(arr[mid]>=x){
                if(ans==-1)ans=mid;
                else ans=min(ans,mid);
                right=mid-1;
            }
            else{
                left=mid+1;
            }
        }
        return ans;
        
    }
};