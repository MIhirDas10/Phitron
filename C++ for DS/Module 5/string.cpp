#include<bits/stdc++.h>
using namespace std;
int main()
{
    // ---------- c code ----------
    // char a[10]="hello";
    // strcpy(a,"gello");
    // cout<<a<<endl;
    // cout<<strlen(a)<<endl;
    // ---------- c code ----------
    
    string s="Hello"; // doesn't have any restriction of size 
    string s2="Hello";
    // don't have to use strcmp
    if(s==s2){
        cout<<"same"<<endl;
    }
    else{
        cout<<"Not same"<<endl;
    }
    // can increase it's size
    s="gello mellow meow";
    // cout<<s<<endl;
    return 0;
}