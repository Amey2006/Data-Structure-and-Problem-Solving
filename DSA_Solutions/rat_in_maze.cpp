#include <bits/stdc++.h>
using namespace std;

int dx[] = {1, 0, 0, -1};
int dy[] = {0, -1, 1, 0};
string dir = "DLRU";

bool isSafe(int x, int y, vector<vector<int>>& maze, vector<vector<int>>& visited) {
    int n = maze.size();
    return(x>=0 && y>=0 && x<n && y<n && visited[x][y]==0
    && maze[x][y]==1);

}

void solve(int x, int y, vector<vector<int>>& maze,
           vector<vector<int>>& visited, string path,
           vector<string>& ans) {
            int n = maze.size();
            if(x==n-1 && y==n-1)
            {
                ans.push_back(path);
                return;
            }
            visited[x][y]=1;

            for(int i=0;i<4;i++)
            {
               if( isSafe(x+dx[i],y+dy[i],maze,visited) )
               {
                    solve(x+dx[i],y+dy[i],maze,visited,path+dir[i],ans);
               }
            }
            visited[x][y]=0;
}

int main() {
    vector<vector<int>> maze = {
        {1, 0, 0},
        {1, 1, 0},
        {0, 1, 1}
    };

    int n = maze.size();

    vector<vector<int>> visited(n, vector<int>(n, 0));
    vector<string> ans;

    if (maze[0][0] == 1) {
        solve(0, 0, maze, visited, "", ans);
    }

    // print answer
    for (auto s : ans) {
        cout << s << endl;
    }

    return 0;
}