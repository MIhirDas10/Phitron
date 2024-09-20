#include <bits/stdc++.h>
using namespace std;
// co-ordinates left, right, up, down = {0, 1}, {0, -1}, {-1, 0}, {1, 0}

char a[1000][1000]; // grid
bool vis[1000][1000]; // Visited tracker
vector<pair<int, int>> d = {{0,1}, {0,-1}, {-1,0}, {1,0}}; // co-ordinates
int n, m;

bool valid(int i, int j){
    return (i >= 0 && i < n && j >= 0 && j < m && a[i][j] == '.' && !vis[i][j]);
}

void dfs(int si, int sj){
    vis[si][sj] = true;
    for (auto& dir : d){
        int ci = si + dir.first;
        int cj = sj + dir.second;

        if(valid(ci, cj)){
            dfs(ci, cj);
        }
    }
}

int countingApartment(){
    memset(vis, false, sizeof(vis));
    int appCount = 0;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(a[i][j] == '.' && !vis[i][j]){
                dfs(i, j);
                appCount++;
            }
        }
    }
    return appCount;
}

int main(){
    cin>>n>>m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>a[i][j];
        }
    }
    cout<<countingApartment()<<endl;
    return 0;
}
