#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    cin.ignore();
    while(q--){
        string s;
        int k;
        cin>>s>>k;

        int n=s.size();
        int total=0;
        for(int i=0; i<n/2; i++){
            if(s[i] != s[n-i-1]){
                total += abs(s[i]-s[n-i-1]);
            }
        }
        if(total<=k){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}