// brute force approach - just solve the problem without 
                     // - thinking any sort of optimization
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    while(q--){     // O(Q)
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        int sum=0;
        for(int i=l; i<=r; i++){  // O(N)
            sum += a[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}

// O(NQ) => 10^5 * 10^5 = 10^10
// but the limit is 10^7
// that's why TLE