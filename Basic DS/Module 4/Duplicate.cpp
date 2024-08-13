#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    vector<long long int>v(n);
    for(long long int i=0; i<n; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());

    bool flag = false;
    for(long long int i=0; i<n; i++){
        if(v[i] == v[i-1]){
            flag = true;
        }
    }
    if(flag == true) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}