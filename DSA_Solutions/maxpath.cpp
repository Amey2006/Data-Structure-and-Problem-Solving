// User function Template for C++
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
  public:
  int dfs(vector<vector<int>>&matrix, int i, int j, int x, int y)
  {
      int m=matrix.size();
      int n=matrix[0].size();
      if(i==x && j==y)return 0;
      if(i<0 || j<0 || i>=m || j>=n || matrix[i][j]==0)return -1;
      int maxpath=-1;
      matrix[i][j]=0;
      int row[] = {-1, 1, 0, 0};
    int col[] = {0, 0, -1, 1};
    for(int k=0;k<4;k++)
    {
        int ni=i+row[k];
        int nj=j+col[k];
        
        int pathLength = dfs(matrix, ni, nj, x, y);
        
        if (pathLength != -1) {
            maxpath = max(maxpath, 1 + pathLength);
        }
    }
    matrix[i][j]=1;
    return maxpath;
  }
    int longestPath(vector<vector<int>> matrix, int xs, int ys, int xd, int yd) {
        // code here
        if(matrix[xs][ys]==0 || matrix[xd][yd]==0)return -1;
        else 
        return dfs(matrix,xs,ys,xd,yd);
    }
};