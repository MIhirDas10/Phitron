// brute force approach
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    int a[n];
    for(int i=0; i<n; i++){  // O(N)
        cin>>a[i];
    }
    sort(a,a+n);            // O(NlogN)
    while(q--){             // O(Q) -> O(Q*logN) -> O(NlogN)
        int x;
        cin>>x;
        bool flag=false;
        // for(int i=0; i<n; i++){
        //     if(a[i]==x){
        //         flag=true;
        //         break;
        //     }
        // }
        
        int l=0, r=n-1;
        // binary search
        while(l<=r){        // O(logN)
            int mid=(l+r)/2;
            if(a[mid] == x){
                flag=true;
                break;
            }
            if(x > a[mid]){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        if(flag==true) cout<<"found"<<endl;
        else cout<<"not found"<<endl;
    }
    return 0;
}

// O(N) + O(NlogN) + O(NlogN) = O(NlogN)

// O(N) -> removed (small)