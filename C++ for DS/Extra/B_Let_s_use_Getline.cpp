#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int idx=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='\\'){
            idx=i;
            break;
        }
    }
    for(int i=0;i<idx;i++){
        cout<<s[i];
    }
    return 0;
}