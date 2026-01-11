#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution {
  public:
    vector<int> search(string &pat, string &txt) {
        int m = pat.length();
        int n = txt.length();
        vector<int> lps(m, 0), ans;

        // Step 1: Build LPS array
        int len = 0;
        for (int i = 1; i < m; ) {
            if (pat[i] == pat[len]) {
                len++;
                lps[i] = len;
                i++;
            } else {
                if (len != 0) {
                    len = lps[len - 1];
                } else {
                    lps[i] = 0;
                    i++;
                }
            }
        }

        // Step 2: KMP search
        int i = 0, j = 0;
        while (i < n) {
            if (txt[i] == pat[j]) {
                i++;
                j++;
            }
            if (j == m) {
                ans.push_back(i - j);
                j = lps[j - 1];
            }
            else if (i < n && txt[i] != pat[j]) {
                if (j != 0)
                    j = lps[j - 1];
                else
                    i++;
            }
        }
        return ans;
    }

};

int main()
{
    Solution s1;
    string a="aaba";
    string b="aabaacaadaabaaba";
    
    for (int val : s1.search(a,b) )
    {
        cout<<"Index : "<<val<<endl;
    }
    return 0;
}