#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
bool vis[N];
vector<int> adj[N];
bool ans;
bool pathVisit[N];

void dfs(int parent){
    vis[parent] = true;
    pathVisit[parent] = true;
    for(int child: adj[parent]){
        if(pathVisit[child]){
            ans = true;
        }
        if(!vis[child]){
            dfs(child);
        }
    }
    // kaj sesh
    pathVisit[parent] = false;
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
        // adj[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(pathVisit, false, sizeof(pathVisit));
    ans = false;
    // dfs on every node
    for(int i=0; i<n; i++){
        if(!vis[i]){
            dfs(i);
        }
    }
    // to see the parents of each nodes
    // for(int i=0; i<n; i++){
    //     cout<<parentArray[i]<<endl;
    // }
    if(ans) cout<<"cycle found"<<endl;
    else cout<<"cycle not found"<<endl;
    return 0;
}