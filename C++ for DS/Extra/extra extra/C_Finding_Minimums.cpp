#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int min = a[0];
    for(int i=0; i<n; i+=k){
        int min = a[i];
        // cout<<min<<" ";
        for(int j=i; j<i+k && j<n; j++){
            cout<<a[j]<<endl;
        //     if(a[j] < min){
        //         min = a[j];
        //     }
        }
        // cout<<min<<" ";
    }
    return 0;
}