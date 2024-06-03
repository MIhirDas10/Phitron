#include<bits/stdc++.h>
using namespace std;
int main()
{
    // string s="Hello world";
    // cout<<s.size()<<endl;
    // // how much it will alocate
    // cout<<s.max_size()<<endl;
    // // capacity will dynamically increase according to the input
    // // size == capacity
    // cout<<s.capacity()<<endl;

// ----------------------------------
    // clear()
    // string s="Hello";
    // cout<<s<<endl;
    // cout<<s.size()<<endl;
    // s.clear();
    // cout<<s<<endl;
    // cout<<s.size()<<endl;
// ----------------------------------

// ----------------------------------
    // empty() --- returns True or False
    // string s="Hello";
    // s.clear();
    // if(s.empty()==true){
    //     cout<<"Empty"<<endl;
    // }
    // else{
    //     cout<<"Not Empty"<<endl;
    // }
// ----------------------------------

// ----------------------------------
    // resize()
    // as long as decreasing --- will work smoothly
               // increasing --- will take garbage value or given value after the word
    string s;
    cin>>s;
    // cin can't take input with spaces
    // s.resize(5);
    // for increasing
    // s.resize(20,'X');
    // cout<<s.size()<<endl;
    // cout<<s<<endl;
    s.resize(5);
    cout<<s<<endl;
    s.resize(11,'X');
    cout<<s<<endl;
// ----------------------------------
    return 0;
}