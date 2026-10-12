
#include <iostream>
#include <vector>
using namespace std;

int kthElement(vector<int>& a, vector<int>& b, int k) {
    int i = 0, j = 0;
    int count = 0;
    int ans = -1;

    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) {
            ans = a[i];
            i++;
        } else {
            ans = b[j];
            j++;
        }

        count++;

        if (count == k)
            return ans;
    }

    while (i < a.size()) {
        ans = a[i++];
        count++;

        if (count == k)
            return ans;
    }

    while (j < b.size()) {
        ans = b[j++];
        count++;

        if (count == k)
            return ans;
    }

    return -1;
}

int main() {
    vector<int> a = {2, 3, 6, 7, 9};
    vector<int> b = {1, 4, 8, 10};
    int k = 5;

    cout << kthElement(a, b, k);
    return 0;
}
