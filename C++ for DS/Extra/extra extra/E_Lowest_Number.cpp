#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int min=a[0];
    int idx=0;
    for(int i=1; i<n; i++){
        if(a[i] < min){
            min = a[i];
            idx = i;
        }
    }
    idx+=1;
    cout<<min<<" "<<idx<<endl;
    return 0;
}