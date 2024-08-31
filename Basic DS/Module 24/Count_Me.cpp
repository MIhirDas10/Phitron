#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore(); // to ignore the enter
    while(t--){
        string sentence;
        getline(cin, sentence);
        string word;
        stringstream ss(sentence);
        map<string, int> mp;
        int maxCount = 0;
        string maxAppWord;
        while(ss>>word){
            mp[word]++;
            if(mp[word] > maxCount){
                maxCount = mp[word];
                maxAppWord = word;
            }
        }
        cout<<maxAppWord<<" "<<maxCount<<endl;
    }
    return 0;
}