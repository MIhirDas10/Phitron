#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t; 
    while(t--){
        int n;
        cin >> n; 
        int a[n];
        for (int i=0; i<n; i++){
            cin>>a[i];  
        }
        sort(a,a+n);  
        int unique_count=0;
        for (int i=0; i<n; i++){
            if (i==0 || a[i] != a[i-1]){
                a[unique_count++]=a[i];
            }
        }
        for(int i=0; i<unique_count; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
