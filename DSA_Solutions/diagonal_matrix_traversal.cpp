#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> diagonalOrder(const vector<vector<int>>& mat) {
    vector<int> res;
    
    int n = mat.size();
    int m = mat[0].size();

    for (int i = 0; i < n; i++) {
        int row = i;
        int col = 0;
        while (row >= 0 && col < m) {
            res.push_back(mat[row][col]);
            row--;
            col++;
        }
    }

    for (int i = 1; i < m; i++) {
        int row = n - 1;
        int col = i;
        while (row >= 0 && col < m) {
            res.push_back(mat[row][col]);
            row--;
            col++;
        }
    }

    return res;
}

int main() {

    vector<vector<int>> mat = {
        { 1, 2, 3, 4 },
        { 5, 6, 7, 8 },
        { 9, 10, 11, 12 },
        { 13, 14, 15, 16 },
        { 17, 18, 19, 20 }
    };
    vector<int> res = diagonalOrder(mat);
    for (auto val: res) cout << val << " ";
    cout << endl;
    
    return 0;
}