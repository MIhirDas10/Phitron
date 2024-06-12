#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int frequency[26] = {0};
    for(char c : s) {
        frequency[c - 'a']++;
    }
    for(int i=0; i<26; i++){
        if(frequency[i] > 0){
            char letter = 'a'+i;
            cout<<letter<<" "<<":"<<" "<<frequency[i]<<endl;
        }
    }
    return 0;
}