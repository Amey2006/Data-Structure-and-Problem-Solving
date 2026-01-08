#include<iostream>
#include<algorithm>
using namespace std;
class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length() - 1;
        int j = b.length() - 1;
        int carry = 0;
        string ans = "";

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;

            if (i >= 0) sum += a[i--] - '0';
            if (j >= 0) sum += b[j--] - '0';

            ans.push_back((sum % 2) + '0');
            carry = sum / 2;
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main()
{
    Solution s1;
    cout<<"Addition  = "<<s1.addBinary("1","11");
    return 0;
}