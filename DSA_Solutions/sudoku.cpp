#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution {
  public:
    bool isSafe(vector<vector<int>> &mat,int row,int col,int digit)
    {
        for(int i=0;i<9;i++)
            if(mat[row][i]==digit)return false;
        for(int i=0;i<9;i++)
            if(mat[i][col]==digit)return false;
            
        int r=(row/3)*3;
        int c=(col/3)*3;
        for(int i=r;i<r+3;i++)
        {
            for(int j=c;j<c+3;j++)
            {
                if(mat[i][j]==digit)return false;
            }
        }
        return true;
        
    }
    bool helper(vector<vector<int>> &mat,int row,int col)
    {
        if(row==9)
        {
            return true;
        }
        int newrow = row;
        int newcol = col + 1;
        if(newcol == 9) {
            newrow = row + 1;
            newcol = 0;
        }
        if(mat[row][col] != 0)
            return helper(mat, newrow, newcol);
        for(int i=1;i<=9;i++)
        { 
            if(isSafe(mat,row,col,i))
            {
                mat[row][col]=i;
                
                if(helper(mat,newrow,newcol))
                {
                    return true;
                }
                     mat[row][col]=0;
                
            }
        }
        return false;
    }
    void solveSudoku(vector<vector<int>> &mat) {
        // code here
        helper(mat,0,0);
        
    }
};