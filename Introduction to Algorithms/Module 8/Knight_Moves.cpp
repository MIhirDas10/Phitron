#include<bits/stdc++.h>
using namespace std;
// directions
const vector<pair<int,int>> d = {{2,1},{2,-1},{-2,1},{-2,-1},{1,2},{1,-2},{-1,2},{-1,-2}};
int n, m;
bool vis[100][100];  // visited array
int dis[100][100];   // distance array

bool valid(int i, int j){
    if(i<0 || i>=n || j<0 || j>=m)
        return false;
    return true;
}

int bfs(int si, int sj, int di, int dj){
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;
    
    while(!q.empty()){
        pair<int, int> par = q.front();
        int a = par.first, b = par.second;
        q.pop();
        if(a == di && b == dj){
            return dis[a][b]; // when reached destination -> distance
        }

        for(int i = 0; i < 8; i++){
            int ci = a + d[i].first;
            int cj = b + d[i].second;

            if(valid(ci, cj) == true && vis[ci][cj] == false){
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[a][b] + 1;
            }
        }
    }
    return -1; // in case of not reachable
}

int main(){
    int t; // test case
    cin >> t;
    while(t--){
        cin >> n >> m;
        int ki, kj, qi, qj;
        cin >> ki >> kj;  // knight -> /(row, column)
        cin >> qi >> qj;  // queen -> (row, column)
        memset(vis, false, sizeof(vis));
        memset(dis, -1, sizeof(dis));
        int result = bfs(ki, kj, qi, qj);
        cout << result << endl;
    }
    return 0;
}
