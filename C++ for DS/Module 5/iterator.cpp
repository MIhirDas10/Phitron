#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    // string:: iterator it;
    cin>>s;
    // for(int i=0;i<s.size();i++){
    //     cout<<s[i]<<endl;
    // }

    // with pointer
    // -------------------------
    // cout<<*s.begin()<<endl;
    // cout<<*(s.end()-1)<<endl;
    // -------------------------
    // s.begin() ---> private data
    // that's why * is needed to dereference
    // s.end() ---> will give null

    // for(string::iterator it=s.begin();it<s.end();it++){
    // string::iterator it ---> auto
    for(auto it=s.begin();it<s.end();it++){
        cout<<*it<<endl;
    }
    return 0;
}