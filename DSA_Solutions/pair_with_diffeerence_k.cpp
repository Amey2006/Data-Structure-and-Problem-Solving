
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
  public:
    bool findPair(vector<int> &arr, int x) {
        if(arr.size()<=1)return false;
        sort(arr.begin(),arr.end());
        int left=0;
        int right=1;
        while(right<arr.size()  && left < arr.size())
        {
            if(left == right) {
                right++;
                continue;
            }
            int diff= abs(arr[left]-arr[right]);
           if(diff==x)return true;
           if(diff<x)right++;
           else left++;
           
        }
        
        return false;
    }
};
