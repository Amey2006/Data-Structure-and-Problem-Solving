#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
class Solution {
public:
    int reverse(int x) {
        int maxlimit = INT_MAX;
        int minlimit = INT_MIN;
        int rev = 0;

        while (x != 0) {
            int rem = x % 10;

            if (rev > maxlimit / 10 || (rev == maxlimit && rem > 7)) {
                return 0;
            } else if (rev < minlimit / 10 || (rev == minlimit && rem < -8)) {
                return 0;
            }

            else {
                rev = rev * 10 + rem;
            }

            x /= 10;
        }
        return rev;
    }
};