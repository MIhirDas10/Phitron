#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
bool vis[N];
vector<int> adj[N];
int parentArray[N];
bool ans;

void bfs(int s){
    queue<int> q;
    q.push(s);
    vis[s] = true;
    while(!q.empty()){
        int parent = q.front();
        // cout<<parent<<endl;
        q.pop();
        for(int child : adj[parent]){
            if(vis[child] && parentArray[parent] != child){  // cycle
                ans = true;
            }
            if(!vis[child]){
                vis[child] = true;
                parentArray[child] = parent;
                q.push(child);
            }
        }
    }
}

int main()
{
    int n, e;
    cin>>n>>e;
    while(e--){
        // edge input
        int a, b;
        cin>>a>>b;
        // graph representation
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(parentArray, -1, sizeof(parentArray));
    ans = false;
    for(int i=0; i<n; i++){
        if(!vis[i]){
            bfs(i);
        }
    }
    if(ans) cout<<"cycle found"<<endl;
    else cout<<"cycle not found"<<endl;
    return 0;
}