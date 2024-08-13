#include<bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> mylist;        // just with name
    // list<int> mylist(10, 5); // with size -> prints 5 5 5 5 5
    // cout<<mylist.size();
    // cout<<mylist.front();    // gives the first value

// ------------------- copy -------------------
    // list<int> list2 = {1,2,3,4,5};
    // list<int> mylist(list2);    //o(n) // onno list theke copy

    // int a[5] = {10, 20, 30, 40, 50}; 
    // list<int> mylist(a, a+5);   // onno array theke copy
    vector<int> v={100, 200, 300, 400, 500}; // vector theke copy
    list<int> mylist(v.begin(), v.end());
// --------------------------------------------

// --------------------------------------------

// ----------------- iterator -----------------
    // for(auto it = mylist.begin(); it != mylist.end(); it++){
    //     cout<<*it<<endl;
    // }
// --------------------------------------------
// -------------- shortcut --------------------
    for(int val : mylist){
        cout<<val<<endl;
    }
    return 0;
}