#include<bits/stdc++.h>
using namespace std;
int main()
{
// ----------------------------------
    // append()
    // string a="Hello";
    // string b="World";
    // // a+=b;
    // a.append(b); // same thing
    // cout<<a<<endl;
    // cout<<b<<endl;
// ----------------------------------

// ----------------------------------
    // push_back() --- insert an elem
    // string a="Hello";
    // string b="A";
    // a[5]='A'; // doesn't increase memory in this way
    // push_back() //---> expands memory
    // a="HelloA"9; //-> works
    // a=a+"A"; //-> works
    // a+=b; //-> works
    // a.push_back('A'); //<- works for sure!
    // cout<<a<<endl;
// ----------------------------------

// ----------------------------------
    // pop() --- deletes
    // string a="Hello";
    // string b="A";
    // a.push_back('D');
    // a.pop_back();
    // a.pop_back();
    // a.pop_back();
    // cout<<a<<endl;
// ----------------------------------

// ----------------------------------
    // assign()
    // string a="Hello";
    // string b="A";
    // // a="mello";
    // a.assign("Mellow");
    // cout<<a<<endl;
// ----------------------------------

// ----------------------------------
    // erase()
    // string a="HelloWorld";
    // a.erase(4); // kind of like resize
    // a.erase(4,3); // index, length(how much I want to delete)
    // cout<<a<<endl;
// ----------------------------------

// ----------------------------------
    // replace() --- erase + replace
    // string a="HelloWorld";
    // a.replace(4,3,"SO"); // replacing
    // a.replace(4,0,"SO"); // HelloSOoWorld <- doesn't delete only replaces
    // cout<<a<<endl;
// ----------------------------------

// ----------------------------------
    // insert()
    string a="HelloWorld";
    a.insert(5,"Mihir");
    // a.replace(5,0,"MIHIR"); // can be done with replace also
    cout<<a<<endl;
// ----------------------------------
    return 0;
}