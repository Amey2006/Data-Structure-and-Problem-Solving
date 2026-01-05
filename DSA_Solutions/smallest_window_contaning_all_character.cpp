#include<iostream>
#include<unordered_map>
#include<algorithm>
using namespace std;

class Solution {
  public:
    string smallestWindow(string &s, string &p) {
      string ans="";
      unordered_map<char,int>need;
      unordered_map<char,int>window;
      int left=0;
      int right=0;
      int required=0;
      int formed=0;
      int minlen=INT16_MAX;
      int startindex=0;

      for(char c:p)
      {
        need[c]++;
      }
      required=need.size();
      while(right<s.length())
      {
        char c=s[right];

        window[c]++;
        if(need.count(c) && need[c]==window[c] )
        {
            formed++;
        }
        while(formed==required)
        {
            if(right-left+1<minlen)
            {
                minlen=right-left+1;
                startindex=left;
            }
            char leftchar=s[left];
            window[leftchar]--;
            
            if(need.count(leftchar) && need[leftchar]>window[leftchar])
            {
                formed--;
            }
            left++;
        }
        right++;

      }
    //   if (minLen == INT_MAX) return "-1";
      return s.substr(startindex,minlen);
      
    }
};
int  main()
{
    Solution s1;
    string s= "timetopractice";
    string t="toc";
    cout<<"Answer : "<<s1.smallestWindow(s,t);
    return 0;
}