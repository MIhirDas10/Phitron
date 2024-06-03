#include<bits/stdc++.h>
using namespace std;
void print(string& s) // reference
{
    // for the &: if we make change 
    // in the print function, the 
    // change will be effected in
    // main function as well
    s="world";
}
int main()
{
    string s="hello";
    print(s);
    cout<<s<<endl;
    return 0;
}