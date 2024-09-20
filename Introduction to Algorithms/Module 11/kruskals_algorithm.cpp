#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
int parent[N];
int group_size[N];
void dsu_initialize(int n){ // initializing the DSU
    for(int i=0; i<n; i++){
        parent[i]= -1;
        group_size[i] = 1;
    }
}
int dsu_find(int node){ // finds the leader with DSU
    if(parent[node]==-1) return node; // leader
    // if -1 then it is the leader
    // otherwise find a leader
    int leader = dsu_find(parent[node]);
    parent[node] = leader; // path compression
    return leader;
}
void dsu_union_by_size(int node1, int node2){ // connection
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
class Edge
{
    public:
    int u,v,w;
    Edge(int u, int v, int w){
        this->u = u;
        this->v = v;
        this->w = w;
    }
};
bool cmp(Edge a, Edge b){
    return a.w < b.w;
}
int main()
{
    int n,e;
    cin>>n>>e;
    dsu_initialize(n);
    vector<Edge> edgeList;
    while(e--){
        int u,v,w;
        cin>>u>>v>>w;
        edgeList.push_back(Edge(u,v,w));
    }
    sort(edgeList.begin(), edgeList.end(), cmp);
    int total_cost = 0;
    for(Edge ed : edgeList){
        int leaderU = dsu_find(ed.u);
        int leaderV = dsu_find(ed.v);
        if(leaderU == leaderV){ // if the two leaders matches then skip
            continue; // skip
        }
        else{
            dsu_union_by_size(ed.u, ed.v);
            total_cost += ed.w; // cost
        }
    }
    cout<<total_cost<<endl;
    return 0;
}
