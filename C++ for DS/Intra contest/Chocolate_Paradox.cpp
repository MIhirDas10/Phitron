#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, y, t;
    cin>>x>>y>>t;
    bool isTrue=false;
    for(int i=0; i*x<=t; i++){
        if((t-i*x) % y == 0){
            isTrue=true;
            break;
        }
    }
    if(isTrue == true){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}