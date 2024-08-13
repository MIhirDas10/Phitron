#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin>>n>>m;
    queue<int> q;
    stack<int> st;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        q.push(x);
    }
    // while(!q.empty()){
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }
    cout<<endl;
    for(int i=0; i<m; i++){
        int x;
        cin>>x;
        st.push(x);
    }
    // while(!st.empty()){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }

    bool found = true;
    // to check all the values from queue and stack
    while(!q.empty() && !st.empty()){
        if(q.front() != st.top()){ // should be equal
            found = false;
            break;
        }
        q.pop();
        st.pop();
    }
    if(n != m) cout<<"NO"<<endl;
    else if(found && q.empty() && st.empty()) cout<<"YES"<<endl; // true & true & true = true
    else cout<<"NO"<<endl;                                       // else: false
    return 0;
}