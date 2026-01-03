#include<iostream>
#include<vector>
using namespace std;
class Solution
{
    public:
    void printdp(vector<vector<int>>dp)
    {
        for(int i=0;i<dp.size();i++)
        {
            for(int j=0;j<dp.size();j++)
            {
                cout<<"  "<<dp[i][j];
            }
            cout<<endl;
        }
    }
    int palindrome_substring(string s)
    {
        int n=s.length();
        vector<vector<int>>dp(n,vector<int>(n,0));
        for(int i=0;i<n;i++)
        {
            dp[i][i]=1;
        }
        // printdp(dp);
        for(int len =2;len<=n;len++)
        {
                for(int i=0;i<i+len-1;i++)
                {
                    int j=i+len-1;
                    if(s[i]==s[j])
                    {
                        dp[i][j]
                    }
                }
        }



        return 0;
    }

};
int main()
{
    Solution s1;
    cout<<"Answer -> "<<s1.palindrome_substring("aaa")<<endl;
    return 0;
}