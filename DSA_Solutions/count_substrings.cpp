#include<iostream>
#include<algorithm>
using namespace std;
class Solution
{
    public:
    int count_substring(string s)
    {
        int count=0;
       for(int i=0;i<s.length();i++)
       {
        even_odd(s,i,i,count);
        even_odd(s,i,i+1,count);

       }
       return count;
        
    }
    void even_odd(string &s,int left,int right,int &count)
    {
        while(left>=0 && right<s.length() && s[left]==s[right])
        {
            // int curlen=right-left+1;
            // if(curlen>maxlen)
            // {
            //     maxlen=curlen;
            //     start=left;
            // }
            count++;
            left--;
            right++;
        }
    }
};
int main()
{
    Solution s1;
    string s="abc";
    cout<<"Possible substrings  in  "<<s<<" : "<<s1.count_substring(s);
    return 0;
}