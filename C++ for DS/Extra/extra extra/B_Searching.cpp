#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    long long int target;
    bool flag=false;
    cin>>target;
    for(int i=0; i<n; i++){
        if(a[i] == target){
            cout<<i<<endl;
            flag=true;
            break;
        }
    }
    if(!flag){
        cout<<-1<<endl;
    }
    return 0;
}