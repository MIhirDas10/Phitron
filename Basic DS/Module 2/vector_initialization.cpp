#include<bits/stdc++.h>
using namespace std;
int main()
{
    // // vector<int> v; // type - 1
    // // vector<int> v(5); // type - 2
    // // vector<int> v(5,10); // type - 3

    // // vector<int> v2(5,100); // type - 4 (copying)
    // // vector<int> v(v2);

    // int a[6] = {1,2,3,4,5,6}; // type - 5
    // vector<int> v(a, a+6);

    // // don't have to mention size (auto) 
    // // vector<int> v = {2,10,3};
    // for(int i=0; i<v.size(); i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    // cout<<v.size()<<endl;
    int a[4] = {12,13,14,15};
    vector<int> v(a, a+4);
    cout<<v[3];
    return 0;
}