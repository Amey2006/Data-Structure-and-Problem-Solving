
#include<vector>
#include<iostream>
using namespace std;
class Solution {
public:
    bool isSafe(vector<string>&board,int row,int col,int n)
    {
       for(int i=row;i>=0;i--)
       {
        if(board[i][col]=='Q')return false;
       }
       int r=row;
       int c=col;
       while(r>=0 && c>=0)
       {
        if(board[r][c]=='Q')return false;
        r--;
        c--;
       }
       r=row;
       c=col;
       while(r>=0 && c<n)
       {
        if(board[r][c]=='Q')return false;
        r--;
        c++;
       }
       return true;
    }
    void nqueens(vector<string>&board,int row,vector<vector<string>>&ans,int n)
    {
        if(row==n)
        {
            ans.push_back(board);
            return;
        }
        for(int i=0;i<n;i++)
        {
            if(isSafe(board,row,i,n))
            {
                board[row][i]='Q';
                nqueens(board,row+1,ans,n);
                board[row][i]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string>board(n,string(n,'.'));
        vector<vector<string>>ans;
        nqueens(board,0,ans,n);
        return ans;
    }
};