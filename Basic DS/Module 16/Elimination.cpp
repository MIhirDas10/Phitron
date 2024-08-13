#include<bits/stdc++.h>
using namespace std;
bool id_eliminaited(string s){
    stack<char> st;
    for(char c:s){
        if(!st.empty() && c == '1' && st.top() == '0'){  // 1's previous 0
            st.pop();
        }
        else{
            st.push(c);
        }
    }
    if(st.empty()) return true;
    else return false;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(id_eliminaited(s)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
