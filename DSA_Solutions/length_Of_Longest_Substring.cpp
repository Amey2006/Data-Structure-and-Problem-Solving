#include<iostream>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int maxlen=0;
        unordered_map<char,int>mp;
        for(int right=0;right<s.length();right++)
        {
            if(mp.count(s[right]) && mp[s[right]]>=left)
            {
                left=mp[s[right]]+1;
            }
            mp[s[right]]=right;
            maxlen=max(maxlen,right-left+1);
        }
        return maxlen;
    }
};
int main()
{
    Solution s1;
    cout<<"Length of Longest substring  =  "<<s1.lengthOfLongestSubstring("abcabc");
    return 0;
}