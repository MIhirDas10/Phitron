#include<bits/stdc++.h>
using namespace std;
const int INF = 1e18;  // infinity
class Edge
{
    public:
    int u, v, c;
    Edge(int u, int v, int c){
        this->u = u;
        this->v = v;
        this->c = c;
    }
};

int main(){
    int N, E;
    cin >> N >> E;
    vector<Edge> EdgeList;
    while(E--){
        int u, v, c;
        cin >> u >> v >> c;
        EdgeList.push_back(Edge(u, v, c));
    }
    int S; // source
    cin >> S;
    int dis[N+1];
    for(int i = 1; i <= N; i++){
        dis[i] = INF;  // set each distance to infinity
    }
    dis[S] = 0;  // distance from source -> 0

    // Bellman-Ford Algorithm
    for(int i = 1; i <= N - 1; i++){
        for(Edge ed : EdgeList) {
            int u = ed.u, v = ed.v, c = ed.c;
            if(dis[u] < INF && dis[u] + c < dis[v]){
                dis[v] = dis[u] + c;
            }
        }
    }
    // Checking for negative cycle
    bool cycle = false;
    for(Edge ed : EdgeList){
        int u = ed.u, v = ed.v, c = ed.c;
        if(dis[u] < INF && dis[u] + c < dis[v]){
            cycle = true;
            break;
        }
    }
    if(cycle){
        cout << "Negative Cycle Detected" << endl;
        return 0;
    }

    int T; // test case
    cin >> T;
    while(T--){
        int D; // destination node
        cin >> D;
        if(dis[D] == INF){
            cout << "Not Possible" << endl;
        }
        else{
            cout << dis[D] << endl;
        }
    }
    return 0;
}
