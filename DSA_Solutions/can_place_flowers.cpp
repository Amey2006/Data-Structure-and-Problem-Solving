#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n==0)return true;
        bool right_empty;
        bool left_empty;
        int counter = 0;
        for (int i = 0; i < flowerbed.size() && counter <= n; i++) {
            if (flowerbed[i] != 1) {
                left_empty = (i == 0 || flowerbed[i - 1] == 0);
                right_empty =
                    (i == (flowerbed.size() - 1) || flowerbed[i + 1] == 0);
                if (left_empty && right_empty) {
                    counter++;
                    flowerbed[i] == 1;
                    i += 1;
                    if (counter == n)
                        return true;
                }
            }
        }
        return false;
    }
};