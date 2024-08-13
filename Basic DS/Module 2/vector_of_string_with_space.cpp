#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();  // to ignore the enter

    vector<string>v(n);
    for(int i=0; i<n; i++){
        getline(cin,v[i]);  // for space
    }
    for(string val:v){
        cout<<val<<endl;
    }
    return 0;
}