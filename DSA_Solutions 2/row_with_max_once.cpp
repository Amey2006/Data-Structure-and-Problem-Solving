
#include<vector>
#include<iostream>
#include<climits>
using namespace std;
class Solution {
public:
    int bin_search(vector<int>v)
    {
        int ans=v.size();
        int low=0;
        int high=v.size()-1;
        while(low<=high)
            {
                int mid=low+(high-low)/2;
                if(v[mid]==1)
                {
                    ans=mid;
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
        return ans;
    }
    int rowWithMax1s(vector<vector<int>>& mat) {
        int row=-1;
        int max_once=INT_MIN;
        for(int i=0;i<mat.size();i++)
            {
                int once=mat[i].size()-bin_search(mat[i]);
                cout<<"\nOnce : "<<once<<endl;
                if (once>max_once)
                {
                    row=i;
                    max_once=once;
                    cout<<"\n Row changed : "<<row;
                }
            }
        return row;
    }
};
int main()
{
    Solution s1;
    vector<vector<int>> mat=
    {{1, 1, 1}, {0, 0, 1}, {0, 0, 0}};


    cout<<"Answer : "<<s1.rowWithMax1s(mat);
    
    return 0;
}