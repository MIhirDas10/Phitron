#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    for(int i=0; i<s.length(); i++){
        if('a' <= s[i] && s[i] >= 'z'){
            cout << s[i] - '0';
        }
    }
    return 0;
}