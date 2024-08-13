#include<bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> mylist = {10, 20, 30};
    // list<int> newlist;

    // // newlist.assign(mylist); // doesn't work
    // // way-1
    // newlist.assign(mylist.begin(), mylist.end()); // works

    // // way-2
    // newlist = mylist;

    // for(int val : newlist){
    //     cout<<val<<endl;
    // }

    // -------------------------------------
    list<int> mylist = {10, 20, 30, 40, 50, 60, 70};
    // list<int> newlist = {15, 25, 35};
    // vector<int> v = {60, 70, 80};
    // mylist.push_front(200); // insert head ---> // o(1) 
    // mylist.push_back(100);  // insert tail ---> // o(1)
    // mylist.pop_back();
    // mylist.pop_back();      // delete tail ---> // o(1)
    // mylist.pop_front();     // delete head --
    
    // insert ------------------
    // mylist.insert(next(mylist.begin(), 2), 500);   // o(n)
    // mylist.insert(next(mylist.begin(), 2), {1000, 2000, 3000});   // o(n)
    // mylist.insert(next(mylist.begin(), 2), newlist.begin(), newlist.end());   // o(n)
    // mylist.insert(next(mylist.begin(), 2), v.begin(), v.end());   // o(n)
    // for(int val : mylist){
    //     cout<<val<<endl;
    // }

    // erase & replace & find ------------------
    mylist.erase(next(mylist.begin(), 2));
    // mylist.erase(next(mylist.begin(), 2), next(mylist.begin(), 5));
    
    // replace(mylist.begin(), mylist.end(), 30, 100); // joto gula 30 ase shob 100 hoye jabe
    
    // auto it = find(mylist.begin(), mylist.end(), 40);
    // if(it == mylist.end()){
    //     cout<<"Not found";
    // }
    // else{
    //     cout<<"Found";
    // }
    
    for(int val : mylist){
        cout<<val<<endl;
    }

    return 0;
}