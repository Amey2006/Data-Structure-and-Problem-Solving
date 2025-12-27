#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>mp;
        for(int i=0;i<strs.size();i++)
        {
            string dummy=strs[i];
            sort(dummy.begin(),dummy.end());
            mp[dummy].push_back(strs[i]);
        }
        for(auto it:mp)
        {
            ans.push_back(it.second);
        }
       
        return ans;
    }
};  
int main()
{
    Solution s1;
    vector<string>v={"eat","tea","tan","ate","nat","bat"};
    vector<vector<string>>ans=s1.groupAnagrams(v);
    for(vector<string> v:ans)
    {
        cout<<"[ ";
        for(string s:v)
        {
            cout<<" "<<s;
        }
        cout<<" ]";
    }
    return 0;
}