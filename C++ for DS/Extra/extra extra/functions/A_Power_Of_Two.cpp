#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    if(n>0 && (n & (n-1)) == 0){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}