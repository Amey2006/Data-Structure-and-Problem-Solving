#include<iostream>
#include<vector>
using namespace std;
class Solution {
  public:
  bool issafe(vector<vector<bool>>&graph,int node,vector<int>&colored,int col)
  {
       for(int i = 0; i < graph.size(); i++) {
            if(graph[node][i] && colored[i] == col) {
                return false;
            }
        }
        return true;
  }
  bool solve( vector<vector<bool>>&graph,int node,vector<int>&colored,int m)
  {
      if(node==graph.size())return true;
      for(int col=1;col<=m;col++)
      {
          if(issafe(graph,node,colored,col))
          {
              colored[node]=col;
              if(solve(graph,node+1,colored,m)){
                  return true;
              }
              colored[node]=-1;
          }
          
      }
      return false;
  }
    bool graphColoring(int v, vector<vector<int>> &edges, int m) {
        // code here
        vector<vector<bool>>graph(v,vector<bool>(v,false));
        for(int i=0;i<edges.size();i++)
        {
            graph[edges[i][0]][edges[i][1]]=true;
            graph[edges[i][1]][edges[i][0]]=true;
        }
      vector<int>colored(v,-1);

        return (solve(graph,0,colored,m));

        
    }
};