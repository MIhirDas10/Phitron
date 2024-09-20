#include <bits/stdc++.h>
using namespace std;
// co-ordinates left, right, up, down = {0, 1}, {0, -1}, {-1, 0}, {1, 0}

char grid[1000][1000]; // grid
bool visited[1000][1000]; // Visited tracker
vector<pair<int, int>> d = {{0,1}, {0,-1}, {-1,0}, {1,0}}; // co-ordinates
int n, m;

bool isValid(int x, int y){
    return (x >= 0 && x < n && y >= 0 && y < m && grid[x][y] == '.' && !visited[x][y]);
}

int dfs(int x, int y){
    int count = 1;
    visited[x][y] = true;
    for(auto& c : d){
        int new_x = x + c.first;
        int new_y = y + c.second;
        if(isValid(new_x, new_y)){
            count += dfs(new_x, new_y);
        }
    }
    return count;
}

vector<int> countingApartments(){
    vector<int> appSize;
    memset(visited, false, sizeof(visited));
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(grid[i][j] == '.' && !visited[i][j]){
                int size = dfs(i, j);
                appSize.push_back(size);
            }
        }
    }
    return appSize;
}

int main(){
    cin>>n>>m;
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin>>grid[i][j];
        }
    }
    vector<int> appSize = countingApartments();
    if(appSize.empty()){
        cout<<"0"<< endl;  // no appartment
    }
    else{  // there is
        sort(appSize.begin(), appSize.end());  // sorting - ascending order
        for(size_t i = 0; i < appSize.size(); i++){
            if(i > 0){
                cout << " ";
            }
            cout<<appSize[i];
        }
        cout<<endl;
    }
    return 0;
}
