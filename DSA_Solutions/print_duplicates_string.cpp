#include<iostream>
#include<vector>
#include<unordered_map>// <---------Hashmap 
using namespace std;
class Solution
{
    public:
    vector<int> print_duplicates(string str)
    {
       unordered_map<char,int>mp;
       for(int i=0;i<str.length();i++)
       {
        mp[str[i]]++;
       }
       for(auto it:mp)
       {
        if(it.second>1)
        cout<<"[ "<<it.first<<" , "<<it.second<<" ]"<<endl;
       }
    }
};
int main()
{
    Solution s1;
    string s="geeksforgeeks";
    s1.print_duplicates(s);
    return 0;
}