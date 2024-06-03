#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        stringstream ss(s);
        string word;
        ss>>s>>word;
        int len=word.size();
        while(s.find(word)!=-1){
            s.replace(s.find(word),len,"#");
        }
        cout<<s<<endl;
    }
    return 0;
}