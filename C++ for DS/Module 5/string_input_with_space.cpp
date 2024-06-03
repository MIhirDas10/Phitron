#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    // 2 ways
    cin.ignore();
    // getchar();
// note
// !-------------______------------!
    // after taking the int variable input we are pressing 
    // the enter key to give string input "Hello World". 
    // Now the problem is string is taking that enter (new line)
    // as an input...so we are simply ignoring that enter
    // by writing cin.ignore();
    // if that doesn't work then we will use getchar();
// !-------------______------------!
    string s;
    // cin>>s; // can't take space
    // cin.getline(s,100); char s[100];
    // ----------------------------
    getline(cin,s); // if there is space then use it
    // ----------------------------
    // cout<<s<<endl;
    // cout<<s.size()<<endl;
    cout<<x<<endl;
    cout<<s<<endl;
    return 0;
}