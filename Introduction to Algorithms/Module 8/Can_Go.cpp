#include <bits/stdc++.h>
using namespace std;
const int N = 1005; 
const int INF = 1e18; // infinity
vector<pair<int, int>> v[N]; // adjacency list (node, weight)
int dis[N]; // distance array

class cmp{
public:
    bool operator()(pair<int, int> a, pair<int, int> b){
        return a.second > b.second; // min-heap
    }
};

void dijkstra(int src, int n){
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
    pq.push({src, 0}); // Source and 0 -> distance
    dis[src] = 0;
    while (!pq.empty()){
        pair<int, int> parent = pq.top();
        pq.pop();
        int node = parent.first;
        int cost = parent.second;
        // if cost > distance -> continue
        if (cost > dis[node]) continue;
        
        for (pair<int, int> child : v[node]){
            int childNode = child.first;
            int childCost = child.second;
            if(cost + childCost < dis[childNode]){
                // path relaxation
                dis[childNode] = cost + childCost;  // update
                pq.push({childNode, dis[childNode]});
            }
        }
    }
}

int main(){
    int n, e;
    cin >> n >> e;
    
    for(int i=0; i<e; i++){
        int a, b, w;
        cin >> a >> b >> w;
        v[a].push_back({b, w}); // directed graph
    }
    int source;
    cin >> source;
    for(int i=1; i<=n; i++){
        dis[i] = INF;
    }
    dijkstra(source, n);
    
    int t; // test cases
    cin >> t;
    while(t--){
        int D, dw; // D -> destination node and dw -> cost
        cin >> D >> dw;
        
        if(dis[D] <= dw){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
