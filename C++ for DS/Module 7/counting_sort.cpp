// works on int & str both
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int frq[26]={0}; // every character's count is 0
    for(char c:s){
        // cout<<c<<endl;
        frq[c-'a']++; // 0-25
    }
    int count=0;
    for(char i='a';i<='z';i++){ // ai loop ta 26 bar choltese
        // count++;
        // cout<<i<<" - "<<frq[i-'a']<<endl;
        for(int j=0;j<frq[i-'a'];j++){ // ai loop ta for 'a' = 2 times || 
                                                  // for 'd' = 1 time  || 
                                                  // for 'm' = 2 times ... other wise shob gula 0 bar cholbe
            cout<<i;
        }
    }
    // cout<<count;
    return 0;
}