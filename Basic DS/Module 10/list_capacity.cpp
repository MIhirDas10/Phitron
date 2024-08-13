#include<bits/stdc++.h>
using namespace std;
int main()
{
    // ----------- max size ------------
    list<int> mylist = {10, 20, 30};
    // cout<<mylist.max_size();
    // ---------------------------------

    // --------- clear & resize --------
    // mylist.clear();
    mylist.resize(2);   // 10 20
    // mylist.resize(5);   // 10 20 0 0 0
    mylist.resize(5, 100);
    cout<<mylist.size()<<endl;;
    for(int val : mylist){
        cout<<val<<endl;
    }
    // ---------------------------------
    return 0;
}