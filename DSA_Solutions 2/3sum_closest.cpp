#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        int ans = nums[0] + nums[1] + nums[2]; // initial sum
        
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < n - 2; i++) {
            int left = i + 1;
            int right = n - 1;

            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];

                // if exact match
                if (sum == target) return sum;

                // update closest answer
                if (abs(target - sum) < abs(target - ans)) {
                    ans = sum;
                }

                // move pointers
                if (sum > target) right--;
                else left++;
            }
        }
        return ans;
    }
};