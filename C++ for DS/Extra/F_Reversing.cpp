#include<bits/stdc++.h>
using namespace std;
void reverse(int i,int *a){
    if(i<0) return;
    cout<<a[i]<<" ";
    reverse(i-1,a);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    reverse(n-1,a);
    return 0;
}
