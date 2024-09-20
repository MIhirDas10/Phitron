#include<bits/stdc++.h>
using namespace std;
vector<int> v[1005];  // adjacency list
bool vis[1005]; // visited track
void bfs(int src){
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while(!q.empty()){
        int par = q.front();
        q.pop();
        cout<<par<<endl;
        // every child
        // for(int i=0; i<v[par].size(); i++){
        //     int child = v[par][i];
        //     cout<<child<<endl;
        // }
        // short cut
        for(int child:v[par]){
            if(vis[child] == false){
                q.push(child);
                vis[child] = true;
            }
        }
    }
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
    bfs(src);
    return 0;
}