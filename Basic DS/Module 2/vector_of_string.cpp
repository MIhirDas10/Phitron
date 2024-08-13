#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string>v;
    for(int i=0; i<n; i++){
        string s;
        cin>>s; // no need for getline() -> because no space 
        v.push_back(s);
    }
    // for(int i=0; i<v.size(); i++){
    //     cout<<v[i]<<endl;
    // }

    for(string val:v){
        cout<<val<<endl;
    }
    return 0;
}