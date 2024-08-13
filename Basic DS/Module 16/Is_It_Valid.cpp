#include<bits/stdc++.h>
using namespace std;
bool is_Legit(string s){
    stack<char> st;
    for(char c:s){
        if(c == '0'){
            if(!st.empty() && st.top() == '1'){
                st.pop();
            }
            else{
                st.push(c);
            }
        }
        else if(c == '1'){
            if(!st.empty() && st.top() == '0'){
                st.pop();
            }
            else{
                st.push(c);
            }
        }
        else{
            st.push(c);
        }
    }
    if(st.empty()) return true;
    else return false;
}
int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(is_Legit(s)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
