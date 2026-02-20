#include<iostream>
#include<vector>

using namespace std;
class Solution {
  public:
    string countSort(string s) {
        vector<int>freq(26,0);
        string ans="";
        for(int i=0;i<s.length();i++)
        {
             freq[(s[i]-'a')]++;
        }
        for(int j=0;j<freq.size();j++)
        {
            while(freq[j]>0)
            {
                ans.push_back(j+'a');
                freq[j]--;
            }
        }
        return ans;
        
    }
};