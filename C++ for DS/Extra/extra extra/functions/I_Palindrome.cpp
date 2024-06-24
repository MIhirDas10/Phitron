#include<bits/stdc++.h>
using namespace std;
int main(){
    string N;
    cin >> N;
    string reversed_N;
    bool leading_zero=true;
    for (int i=N.size()-1; i>=0; i--){
        if (leading_zero && N[i]=='0'){
            continue;
        }
        leading_zero=false;
        reversed_N += N[i];
    }
    if (reversed_N.empty()){
        reversed_N = "0";
    }
    cout<<reversed_N<<endl;
    bool is_palindrome = true;
    int length = N.size();
    for (int i=0; i<length/2; i++){
        if(N[i] != N[length-1-i]){
            is_palindrome = false;
            break;
        }
    }
    if(is_palindrome){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
