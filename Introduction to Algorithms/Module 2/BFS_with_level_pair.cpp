#include<bits/stdc++.h>
using namespace std;
vector<int> v[1005];  // adjacency list
bool vis[1005]; // visited track
int level[1005]; // level track
void bfs(int src, int des){
    queue<pair<int, int>> q;
    q.push({src, 0});
    vis[src] = true;
    bool paisi = false;
    while(!q.empty()){
        pair<int, int> p = q.front();
        q.pop();
        int par = p.first;
        int level = p.second;
        // cout<<par<<endl;

        // every child
        // for(int i=0; i<v[par].size(); i++){
        //     int child = v[par][i];
        //     cout<<child<<endl;
        // }

        if(par == des){
            cout<<level<<endl;
            paisi = true;
        }
        // short cut
        for(int child:v[par]){
            if(vis[child] == false){
                q.push({child, level+1});
                vis[child] = true;
            }
        }
    }
    if(paisi) cout<<-1<<endl;
}
int main()
{
    int n,e;
    cin>>n>>e;
    while(e--){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    // source
    int src;
    cin>>src;
    memset(vis, false, sizeof(vis)); // puro visited k false korbe
    bfs(src, 6);
    
    return 0;
}