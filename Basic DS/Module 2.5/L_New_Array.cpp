#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<int>a(t);
    vector<int>b(t);
    for(int i=0; i<t; i++){
        cin>>a[i];
    }
    for(int i=0; i<t; i++){
        cin>>b[i];
    }
    vector<int>c;
    for(int i=0; i<t; i++){
        c.push_back(b[i]);
        
    }
    for(int i=0; i<t; i++){
        c.push_back(a[i]);
        
    }
    for(int val:c){
        cout<<val<<" ";
    }
    return 0;
}