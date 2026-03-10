#include<iostream>
using namespace std;
class Solution {
public:
    string removeDuplicates(string s) {
        string ans="";
        int len=0;
        for(char ch:s)
        {
            if(len>0 && ans[len-1]==ch) 
            {
                ans.pop_back();
                len--;
            }
            else {
                ans.push_back(ch);
                len++;
            }
        }
        
        return ans;


    }
};