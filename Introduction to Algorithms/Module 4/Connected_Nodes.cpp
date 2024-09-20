#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, e;
    cin>>n>>e;
    // Adjacency list
    vector<vector<int>> g(n);
    for(int i = 0; i < e; i++){
        int u, v;
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int q; // queries
    cin>>q;
    while(q--){
        int x; // node
        cin>>x;
        if(g[x].empty()){
            cout<<-1<<endl;
        }
        else{
            sort(g[x].begin(), g[x].end(), greater<int>());  // sorting - descending order
            for(int child : g[x]){
                cout<<child<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
