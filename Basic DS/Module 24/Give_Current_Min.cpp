#include<bits/stdc++.h>
using namespace std;
int main() {
    // min-heap
    priority_queue<int, vector<int>, greater<int>> pq; 
    int n;
    cin>>n;
    for(int i=0; i<n; i++){ // taking inputs and then pushing it
        int x;
        cin>>x;
        pq.push(x);
    }
    int q; // query
    cin>>q;
    while(q--){
        int c; // command
        cin>>c;
        if(c == 0){ // insert
            int x;
            cin>>x;
            pq.push(x);
            cout<<pq.top()<<endl; 
        }
        else if(c == 1){ // top value - minimum value
            if(!pq.empty()){
                cout<<pq.top()<<endl;
            }
            else{
                cout<<"Empty"<<endl;
            }
        }
        else if(c == 2){ // delete
            if(!pq.empty()){
                pq.pop();
                if(!pq.empty()){
                    cout<<pq.top()<<endl;
                }
                else{
                    cout<<"Empty"<<endl;
                }
            }
            else{
                cout<<"Empty"<<endl;
            }
        }
    }
    return 0;
}