#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int longestPalindrome(string s) {
        
        unordered_map<char,int>freq;
        int i=0;
        int count=0;
        while(i<s.length())
        {
            freq[s[i]]++;
            if(freq[s[i]]%2==0)
            {
                count+=2;
            }
            i++;
        }
        for(auto &p:freq)
        {
            if(p.second % 2 != 0)
            {  
                return ++count;
            }
        }
        return count;
    }
};
int main()
{
    Solution s1;
    string s="abccccdd";
    cout<<"\n\nLength of longest palindrome from these characters :  = "<<s1.longestPalindrome(s)<<endl; 
    return 0;
}