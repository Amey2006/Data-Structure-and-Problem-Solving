#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
  public:
    void dfs(vector<vector<char>>& grid,int i,int j,int n,int m)
    {
        if(i<0 ||i>=n ||j<0 ||j>=m||grid[i][j]!='O' )return;
        grid[i][j]='#';
        dfs(grid,i+1,j,n,m);
        dfs(grid,i-1,j,n,m);
        dfs(grid,i,j+1,n,m);
        dfs(grid,i,j-1,n,m);
    }
    void fill(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(i==0 ||  i==n-1 || j==0 || j==m-1)
               { if(grid[i][j]=='O')
                {
                    dfs(grid,i,j,n,m);
                }
                   
               }
            }
        }
         for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='O')grid[i][j]='X';
                if(grid[i][j]=='#')grid[i][j]='O';
               
            }
        }
        
    }
};