#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, e;
    cin>>n>>e;
    int mat[n][n]; // adjacency matrix
    memset(mat, 0, sizeof(mat)); // fill it with zeroes
        while(e--){
        int a, b;
        cin>>a>>b;
        mat[a][b] = 1;  
    }
    int q;
    cin>>q;
    while(q--){  // query
        int a, b;
        cin>>a>>b;
        // connection
        if(mat[a][b] == 1 || a == b){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}
