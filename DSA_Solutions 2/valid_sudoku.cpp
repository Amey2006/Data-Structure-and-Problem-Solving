#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    bool isSafe(vector<vector<char>>& board,int r,int c)
    {
        int count=0;
        int target=board[r][c];
        for(int row=r;row<board.size();row++)
        {
                char no=board[row][c];
                if(no!='.' && no==target)count++;
                if(count>1)return false;
        }
        count=0;
        for(int col=c;col<board.size();col++)
        {
                char no=board[r][col];
                if(no!='.' && no==target)count++;
                if(count>1)return false;
        }
        int sr=(r/3)*3;
        int sc=(c/3)*3;
        count=0;
        for(int i=sr;i<sr+3;i++)
        {
            for(int j=sc;j<sc+3;j++)
            {
                char no=board[i][j];
                if(no!='.' && no==target)count++;
                if(count>1)return false;
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board.size();j++)
            {
                if(board[i][j]!='.')
                    if(!isSafe(board,i,j)) return false;
            }
        }
        return true;
    }
};