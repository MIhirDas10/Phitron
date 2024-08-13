// O(N) time complexity

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){  // O(N)
        cin >> a[i];
    }
    int sum = 0;
    for(int i=0; i<n; i++){  // O(N)
        if(i%2 == 0){
            sum += a[i];
        }
    }
    cout << sum << endl;
    return 0;
}

// O(N) + O(N) = O(N)