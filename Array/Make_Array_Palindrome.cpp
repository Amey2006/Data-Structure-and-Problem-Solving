#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution
{
    public:
    int findops(vector<int>arr,int n)
    {
        int count=0;
        int l=0;
        int r=n-1;
        while(l<r)
        {
            if(arr[l]==arr[r])
            {
                l++;
                r--;
            }
            else if(arr[l]<arr[r])
            {
                arr[l+1]=arr[l]+arr[l+1];
                count++;
                l++;
            }
            else{
                arr[r-1]=arr[r]+arr[r-1];
                count++;
                r--;
            }
        }
        return count;
    }

};
int main()
{
    vector<int>samp={11,14,15,99};
    Solution s;
    int n=samp.size();
    int ans=s.findops(samp,n);
    cout<<"Total Operations -->  "<<ans;
    return 0;
}