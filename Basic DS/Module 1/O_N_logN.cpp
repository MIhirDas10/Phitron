#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++){  // O(N)
        int x=1;
        while(x>0){
            int digit = x%10; // O(log(N))
            cout<<digit<<" ";
            x /= 10;
        }
        cout<<endl;
    }
    return 0;
}

// O(N) * O(log(N)) = O(NlogN)

// sort function ---> O(NlogN)