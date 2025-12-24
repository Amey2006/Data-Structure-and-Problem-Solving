#include<iostream>
using namespace std;
class Solution {
  public:
    string removeConsecutiveCharacter(string& s) {
        // code here.
        int j=0;
        for(int i=1;i<s.length();i++)
        {
            if(s[i]!=s[j])
            {
                j++;
                s[j]=s[i];
            }
        }
       
       s.resize(j+1);
       return s;
    }
};
int main()
{
    Solution s1;
    string s="aabbc";
    cout<<"Result -> "<<s1.removeConsecutiveCharacter(s);
    return 0;
}