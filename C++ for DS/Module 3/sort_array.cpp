#include<bits/stdc++.h>
using namespace std;
int main()
{
    // Nlogn 
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // starting pointer & ending pointer
    // ascending order
    // sort(a,a+n);
    // descending order
    sort(a,a+n,greater<int>());
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}