#include<bits/stdc++.h>
using namespace std;
const int N = 100;
// vector<int> adj[N]; -> adjacency list age evabe hoto
vector<pair<int, int>> v[N]; // akhon pair rakhte hobe
int dis[N];

class cmp
{
    public:
    bool operator()(pair<int, int>a, pair<int, int> b){
        return a.second > b.second; // ulta dite hobe
    }
};

void dijkstra(int src){
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
    pq.push({src, 0}); // source and then 0 -> cost
    dis[src] = 0;
    while(!pq.empty()){ // pair ber hobe
        pair<int, int> parent = pq.top();
        pq.pop();
        int node = parent.first;
        int cost = parent.second;
        // parent theke children
        // for(int i=0; i<v[node].size(); i++){
        //     pair<int, int> child = v[node][i];
        // }
        // short cut
        for(pair<int, int> child: v[node]){
            int childNode = child.first;
            int childCost = child.second;
            if(cost + childCost < dis[childNode]){
                // path relax
                dis[childNode] = cost + childCost; // update
                pq.push({childNode, dis[childNode]});
            }
        }
    }
}

int main()
{
    int n,e;
    cin>>n>>e;
    while(e--){
        int a, b, c;
        cin>>a>>b>>c;
        // constructing a weighted graph
        v[a].push_back({b,c}); // (b, cost) pair wise push koro
        v[b].push_back({a,c});
    }
    // for infinity memset messes up
    // memset(dis, INT_MAX, sizeof(dis)); // INT_MAX -> infinity er kaaj kortese
    for(int i=0; i<n; i++){
        dis[i] = INT_MAX;
    }

    dijkstra(0);
    
    for(int i=0; i<n; i++){
        cout<<i<<"-> "<<dis[i]<<endl;
    }
    return 0;
}

// input
// 5 8 -> node, edge 
// 0 1 10
// 0 2 7
// 0 3 4
// 1 4 3
// 2 3 5
// 2 1 1
// 3 4 5
// 3 2 1


// Time Complexity
// ___________
// T(n) = O(V+E)logV
// ___________


// OUTPUT:
// 0-> 0
// 1-> 6
// 2-> 5
// 3-> 4
// 4-> 9