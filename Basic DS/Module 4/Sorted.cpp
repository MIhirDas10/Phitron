#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        bool flag = true; // sorted
        for(int i=1; i<n; i++){
            if(a[i]<a[i-1]){  // current < prev. el.
                flag = false; // not sorted
                break;
            }
            else{
                flag = true;
            }
        }
        if(flag == true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}