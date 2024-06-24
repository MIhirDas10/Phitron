#include<bits/stdc++.h>
using namespace std;
bool prime_check(int n)
{
    if(n<=1) return false;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i == 0) return false;
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(prime_check(n)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}