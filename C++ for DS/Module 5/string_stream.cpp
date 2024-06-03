#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s); // gives one by one word
    string word;
    // --------- another way of doing it
    // stringstream ss; // gives one by one word
    // ss<<s; 
    // ---------
    // ss>>word;
    // cout<<word<<endl;
    // ss>>word;
    // cout<<word<<endl;
    // ss>>word;
    // cout<<word<<endl;
    // ss>>word;
    // cout<<word<<endl;
    // ss>>word;
    // cout<<word<<endl;
    // ------ one by one ------
    int count=0;
    while(ss>>word){
        cout<<word<<endl;
        count++;
    }
    cout<<count<<endl;
    return 0;
}

// -------SYMBOL--------
// >> --- means going 
// << --- means coming
// ---------------------