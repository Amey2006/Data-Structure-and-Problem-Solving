#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    bool check_match(string text,string pattern)
    {
        int n=text.length();
        int m=pattern.length();
        vector<vector<bool>>dp(n+1,vector<bool>(m+1));
        dp[0][0]=1;
        for(int i=1;i<n+1;i++)
        {

            for(int j=1;j<m+1;j++)
            {
                if(text[i-1]==pattern[j-1] || text[i-1]=='?')
                {
                    dp[i][j]=true;
                }
                else if(text[i-1]=='*')
                {
                    dp[i][j]=dp[i][j-1] || dp[i-1][j];
                }
                else{dp[i][j]==false;}
            }
            
        }
        return dp[n][m];
    }
    
};
int main()
{
    Solution s1;
    cout<<"\n\n\n\n\nAnswer  =  "<<s1.check_match("*a*b","adcebe");
    return 0;
}