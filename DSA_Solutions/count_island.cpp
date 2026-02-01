#include<iostream>
#include<vector>
using namespace std;
class Solution {
  public:
  
    void dfs(vector<vector<char>>&grid,vector<vector<bool>>&visited,int i,int j,int n,int m)
    {
        if(i<0 || j<0 || i>=n || j>=m || visited[i][j] || grid[i][j]!='L')
        {
            return;
        }
        visited[i][j]=true;
        dfs(grid,visited,i-1,j,n,m);
        dfs(grid,visited,i+1,j,n,m);
        dfs(grid,visited,i,j+1,n,m);
        dfs(grid,visited,i,j-1,n,m);
        dfs(grid,visited,i+1,j+1,n,m);
        dfs(grid,visited,i+1,j-1,n,m);
        dfs(grid,visited,i-1,j+1,n,m);
        dfs(grid,visited,i-1,j-1,n,m);
        
        
    }
    int countIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int island=0;
      vector<vector<bool>>visited(n,vector<bool>(m,false));
      
      for(int i=0;i<n;i++)
      {
          for(int j=0;j<m;j++)
          {
              if(grid[i][j]=='L' && !visited[i][j])
              {
                  dfs(grid,visited,i,j,n,m);
                  island++;
              }
          }
      }
        return island;
    }
};