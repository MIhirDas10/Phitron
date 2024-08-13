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
    while(q--){
        int x;
        cin>>x;
        bool found=false;
        for(int i=0; i<n; i++){
            if(x==a[i]){
                found=true;
                break;
            }
            else{
                found=false;
            }
        }
        if(found==true){
            cout<<"found"<<endl;
        }
        else{
            cout<<"not found"<<endl;
        }
    }
    return 0;
}