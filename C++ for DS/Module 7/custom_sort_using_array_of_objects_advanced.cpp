// custom sort
// a b c z b z c z c z
// z -> 4
// c -> 3
// b -> 2
// a -> 1
// sorted result
// zzzzcccbba
// 4 ta jeta seta age print hobe 4 bar, then 3ta, 2ta, 1ta...you get the idea, right?
#include<bits/stdc++.h>
using namespace std;
class Freq
{
public:
    char value;
    int count;
};
bool cmp(Freq a, Freq b)
{
    if(a.count==b.count){
        // based on character
        return a.value<b.value;
    }
    else{
        // based on count
        return a.count>b.count;
    }
}
int main()
{
    string s;
    cin>>s;
    Freq f[26]; // 26 object create korlam
    for(int i=0;i<26;i++){
        f[i].value=char(i+'a'); // a = 97
        f[i].count=0; 
        // char & count set hoye gese
    }
    // range based for loop
    for(char c:s){ // from string s I am taking each character
        int ascii=int(c-'a'); // c -> character like a,b,c,d,e...
        f[ascii].count++;
        // ascii value & index number same...
        // that's why increment of count is working
    }
    sort(f,f+26,cmp);
    for(int i=0;i<26;i++){
        // if(f[i].count>0){
            // cout<<f[i].value<<" "<<f[i].count<<endl;
        for(int j=0;j<f[i].count;j++){
            cout<<f[i].value;
        } 
        // }
    }
    return 0;
}