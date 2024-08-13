#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    // // brute force
    // int sum = 0;
    // for(int i=1; i<=n; i++){  // O(N)
    //     sum += i;
    // }
    // cout << sum;

    // optimized way
    // formula
    long long int sum = (n*(n+1))/2;
    cout << sum;
    return 0;
}