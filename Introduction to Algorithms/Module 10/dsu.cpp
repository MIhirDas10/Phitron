#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
int par[N];
int groupsize[N];
int level[N];
void dsu_initialize(int n){
    for(int i=0; i<n; i++){
        par[i] = -1; // all of them are leaders
        groupsize[i] = 1;
        level[i] = 0;
    }
}
int dsu_find(int node){
    if(par[node] == -1) return node;
    int leader = dsu_find(par[node]);
    par[node] = leader;
    return leader;
}
// without any logic - bad
// void dsu_union(int node1, int node2){
//     // friendship korbe
//     int leaderA = dsu_find(node1);
//     int leaderB = dsu_find(node2);
//     par[leaderA] = leaderB; // based on nothing
//     // randomly updates based on no rule
// }

// optimized two ways - use one (both are good -> size and level)
// !-----UNION BY SIZE-----!
void dsu_union_by_size(int node1, int node2){
    // friendship korbe
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    // based on size
    if(groupsize[leaderA] > groupsize[leaderB]){
        par[leaderB] = leaderA;
        groupsize[leaderA] += groupsize[leaderB];
    }
    else{
        par[leaderA] = leaderB;
        groupsize[leaderB] += groupsize[leaderA];
    }
}
// !-----UNION BY LEVEL-----!
void dsu_union_by_level(int node1, int node2){
    // friendship korbe
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    // based on level
    if(level[leaderA] > level[leaderB]){
        par[leaderB] = leaderA;
    }
    else if(level[leaderA] < level[leaderB]){
        par[leaderA] = leaderB;
    }
    else{ // same
        par[leaderA] = leaderB;
        level[leaderB]++;
    }
}
int main()
{
    dsu_initialize(7);
    // cout<<find(0)<<endl;
    // cout<<find(1)<<endl;
    // cout<<find(2)<<endl;
    // cout<<find(3)<<endl;
    // cout<<dsu_find(1)<<endl;
    // dsu_union(1, 5); // updating parent
    // cout<<dsu_find(1)<<endl;

    dsu_union_by_level(1,2);
    dsu_union_by_level(2,3);
    dsu_union_by_level(4,5);
    dsu_union_by_level(5,6);
    dsu_union_by_level(1,4);
    cout<<dsu_find(1)<<endl;
    cout<<dsu_find(4)<<endl;
    return 0;
}

// normal time complexity -> o(n)
// optimized time complexity -> o(logn) // close to constant
