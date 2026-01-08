#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution
{
  public:
  int longest_prefix_suffix(string s)
  {
    vector<int>lps(s.length(),0);
    int i=1;
    int len=0;
    while(i<s.length())
    {
        if(s[i]==s[len])
        {
            len++;
            lps[i]=len;
            i++;
        }
        else{
            if(len!=0)
            {
                len=lps[len-1];
            }
            else{
                lps[i]=0;
                i++;
            }
        }
    }
    return lps[s.length()-1];
  }
   
};
int main()
{
    Solution s1;
    cout<<"\n\nLongest prefix suffix = "<<s1.longest_prefix_suffix("aabcdaabc")<<endl; 
    return 0;
}