#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,2,3,4,5,6,7,8,9,2,5,2};
    // vector<int>:: iterator it;
    // // returns iterator

    auto it = find(v.begin(),v.end(),3);
    cout<<*it;
    if(it == v.end()) cout<<"Not Found";
    else cout<<"Found";
    return 0;
}