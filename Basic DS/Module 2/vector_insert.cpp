#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5};
    vector<int> v2={100,101,102,103};
    v.insert(v.begin()+2,20);
    // v.insert(v.begin()+2,10); // position, number
    // v.insert(v.begin()+2,v2.begin(),v2.end()); // whole vector insert
                                               // that's why starting 
                                               // and ending point is needed 
    for(int x:v){
        cout<<x<<" ";
    }
    return 0;
}