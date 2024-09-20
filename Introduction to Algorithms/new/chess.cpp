#include<bits/stdc++.h>
using namespace std;

bool vis[10][10]; // 8*8 grid tai ektu bariye 10
int dis[20][20];
vector<pair<int,int>> d = {{2,1},{2,-1},{-2,1},{-2,-1},{1,2},{1,-2},{-1,2},{-1,-2}};
int n, m;   // globally decleared

bool valid(int i, int j){
    if(i<0 || i>=n || j<0 || j>=m)
        return false;
    return true;
}

void bfs(int si, int sj){
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;
    while(!q.empty()){
        pair<int, int> par = q.front();
        int a = par.first, b = par.second;
        q.pop();
        // cout<<a<<" "<<b<<endl;
        for(int i=0; i<8; i++){
            int ci = a + d[i].first;
            int cj = b + d[i].second;

            if(valid(ci, cj) == true && vis[ci][cj] == false){
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[a][b]+1;
                
            }
        }
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        n = 8, m = 8;
        string s, d;
        cin>>s>>d;
        // source er row, source er column
        // destination er row, column
        int si, sj, di, dj;
        // conversion
        si = s[0] - 'a';  // a1 -> char hishabe ase
        sj = s[1] - '1';
        di = d[0] - 'a';
        dj = d[1] - '1';
        

        memset(vis,false,sizeof(vis));
        memset(dis,-1,sizeof(dis));
        bfs(si, sj);
        cout<<dis[di][dj]<<endl;;
    }
    return 0;
}