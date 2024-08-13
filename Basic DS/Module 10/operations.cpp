#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> mylist = {20, 40, 30, 10, 50, 10, 10};
    // mylist.remove(10);      // O(n)
    // mylist.sort();             // o(nlogn)
    // mylist.sort(greater<int>());
    // mylist.unique();           // o(n) + o(logn) = o(nlogn)
    // mylist.reverse();
    
    for(int val:mylist){
        cout<<val<<endl;
    }
    return 0;
}