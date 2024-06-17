#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int count = 0; 
        int length=s.length();
        if(length>10){
            // big
            for(int i=1; i<length-1; i++){
                count++;
            }
            cout<<s[0]<<count<<s[length-1]<<endl;
        }
        else{
            // small
            cout<<s<<endl;
        }
    }
    return 0;
}