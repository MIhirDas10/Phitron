#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    bool found=false;
    int count=0;
    for(char c:s){
        // isalpha --- returns
        // 0 - false
        // 1 - small letter
        // 2 - capital letter
        if(isalpha(c)){
            if(found==false){
                count++;
            }
            found=true;
        }
        else{
            found=false;
        }
    }
    cout<<count<<endl;
    return 0;
}