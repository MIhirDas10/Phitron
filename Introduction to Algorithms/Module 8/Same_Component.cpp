#include<bits/stdc++.h>
using namespace std;
char a[1000][1000];  // 2D matrix for input
bool vis[1000][1000];  // Visited array
vector<pair<int, int>> d = {{0,1}, {0,-1}, {-1,0}, {1,0}}; // directions
int n, m;
// checking boundary
bool valid(int i, int j) {
    if(i<0 || i >= n || j<0 || j >= m || a[i][j] == '-' || vis[i][j]){
        return false;
    }
    return true;
}
void dfs(int si, int sj){
    vis[si][sj] = true;
    for (int i=0; i<4; i++){
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if(valid(ci, cj)){
            dfs(ci, cj);
        }
    }
}
int main(){
    cin>>n>>m;
    // input matrix
    for (int i=0; i<n; i++) {
        for(int j=0; j<m; j++){
            cin>>a[i][j];
        }
    }
    int si, sj, di, dj; // starting and destination coordinates
    cin>>si>>sj;
    cin>>di>>dj;

    memset(vis, false, sizeof(vis)); // visited array of zeros
    dfs(si, sj);

    // if same or not
    if(vis[di][dj]){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
