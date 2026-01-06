#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;
class Solution
{
    public:
    string longest_substring(string s)
    {
        string ans="";
        int maxlen=0;
        unordered_map<char,int>window;
        int right=0;
        int left=0;
        int startindex=0;
        while(right<s.length())
        {
            char c=s[right];
            window[c]++;
            // cout<<"\nwindow["<<c<<"] = "<<window[c];

                while(window[s[right]]>1)
                {
                  
                    // cout<<" \n"<<s.substr(startindex,maxlen);
                    window[s[left]]--;
                    left++;
                    
                }
            
          
                if(right-left+1>maxlen)
                {
                    maxlen=right-left+1;
                    startindex=left;
                }
                // cout<<"       current answer = "<<s.substr(startindex,maxlen);
                right++;

        }
        
        return s.substr(startindex,maxlen);
    }

};
int main()
{
    Solution s1;
    string s="abcabcab";
    cout<<"\nAnswer : "<<s1.longest_substring(s);
    return 0;
}