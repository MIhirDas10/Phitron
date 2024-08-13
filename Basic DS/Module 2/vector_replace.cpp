#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,2,4,5,6,7,8,9,2,5,2};
    // which value I want to replace and
    // what do I want it to be replced with 
    // replace(v.begin(),v.end(),2,100);
    replace(v.begin(),v.end()-1,2,100);
    for(int c:v){
        cout<<c<<" ";
    }
    return 0;
}