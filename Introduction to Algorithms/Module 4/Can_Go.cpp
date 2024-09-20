#include <bits/stdc++.h>
using namespace std;
// directions left, right, up, down = {0, 1}, {0, -1}, {-1, 0}, {1, 0}

const vector<pair<int, int>> coordinates = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
bool vis[1000][1000];
char grid[1000][1000];
int n, m;
// grid boundary
bool valid(int i, int j){
    return (i >= 0 && i < n && j >= 0 && j < m && grid[i][j] != '#');
}
// if A can go to B
bool connected(int si, int sj, int ei, int ej){
    memset(vis, false, sizeof(vis));
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    
    while(!q.empty()){
        pair<int, int> curr = q.front();
        int x = curr.first;
        int y = curr.second;
        q.pop();

        // if room B -> return true
        if(x == ei && y == ej){
            return true;
        }
        for(auto& c : coordinates){
            int new_x = x + c.first;
            int new_y = y + c.second;
            if(valid(new_x, new_y) && !vis[new_x][new_y]){
                vis[new_x][new_y] = true;
                q.push({new_x, new_y});
            }
        }
    }
    // if room B not found -> return false
    return false;
}
int main(){
    cin>>n>>m;
    pair<int, int> start, end;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>grid[i][j];
            if(grid[i][j] == 'A'){
                start = {i, j};
            }
            else if(grid[i][j] == 'B'){
                end = {i, j};
            }
        }
    }
    if(connected(start.first, start.second, end.first, end.second)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
