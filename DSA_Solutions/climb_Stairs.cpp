#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int climbStairs(int n) {
        if(n<=2) return n;
        int previous1=1;
        int previous2=2;
        int ans;
        for(int i=3;i<=n;i++)
        {
            ans=previous1+previous2;
            previous1=previous2;
            previous2=ans;
        }
        return ans;
    }
};