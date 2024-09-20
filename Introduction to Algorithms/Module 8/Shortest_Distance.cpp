#include <bits/stdc++.h>
#define ll long long int
using namespace std;

const ll INF = 1e18;  // Large value for infinity

int main() {
    ll n, e;
    cin >> n >> e;
    
    // Initialize adjacency matrix with INF
    ll adj[n][n]; // adj matrix
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            adj[i][j] = INT_MAX;
            if(i==j) adj[i][j] = 0;
        }
    }    
    // Distance from a node to itself is 0
    for (int i = 1; i <= n; i++) {
        adj[i][i] = 0;
    }
    
    // Input edges
    while (e--) {
        int a, b;
        ll c;
        cin >> a >> b >> c;
        a--;  // Adjusting to 0-based indexing
        b--;  // Adjusting to 0-based indexing
        // Update the adjacency matrix with the minimum cost for multiple edges
        if (c < adj[a][b]) { // Replace `min`
            adj[a][b] = c;
        }
    }
    
    // Floyd-Warshall Algorithm (0-based indexing)
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (adj[i][k] < INF && adj[k][j] < INF && adj[i][k] + adj[k][j] < adj[i][j]) {
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }
    
    // Answer queries
    int q;
    cin >> q;
    while (q--) {
        int x, y;
        cin >> x >> y;
        // x--;  // Adjusting to 0-based indexing
        // y--;  // Adjusting to 0-based indexing
        if (adj[x][y] == INF) {
            cout << -1 << endl;  // No path exists
        } else {
            cout << adj[x][y] << endl;  // Minimum cost
        }
    }

    return 0;
}
