#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    int count = 0;
    for (int i=0; i<n; i++) {
        if(a[i]==int(a[i])+1){
            count++;
        }
        // cout << a[i] << endl;
    }
    cout<<count<<endl;
    return 0;
}