#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
int parent[N];
int group_size[N];
void dsu_initialize(int n){
    for(int i=0; i<n; i++){
        parent[i]= -1;
        group_size[i] = 1;
    }
}
int dsu_find(int node){
    if(parent[node]==-1) return node; // leader
    // if -1 then it is the leader
    // otherwise find a leader
    int leader = dsu_find(parent[node]);
    parent[node] = leader; // path compression
    return leader;
}
void dsu_union_by_size(int node1, int node2){
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    if(group_size[leaderA] > group_size[leaderB]){
        parent[leaderB] = leaderA;
        // leaderA er group size increase
        group_size[leaderA] += group_size[leaderB];
    }
    else{
        parent[leaderA] = leaderB;
        // leaderB er group size increase
        group_size[leaderB] += group_size[leaderA];
    }
}
int main()
{
    int n, e;
    cin>>n>>e;
    dsu_initialize(n);
    bool cycle = false;
    while(e--){
        int a, b;
        cin>>a>>b;
        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b);
        if(leaderA == leaderB){
            cycle = true;
        }
        else{
            dsu_union_by_size(a, b);
        }
    }
    if(cycle) cout<<"cycle found"<<endl;
    else cout<<"cycle not found"<< endl;
    return 0;
}

// input - for cycle found
// 6 6
// 0 1
// 0 2
// 0 3
// 3 4
// 3 5
// 4 5
// output -> cycle found


// input - for cycle not found
// 4 3
// 0 1
// 0 2
// 0 3
// output -> cycle not found
