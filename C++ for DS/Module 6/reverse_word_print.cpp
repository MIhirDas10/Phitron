#include<bits/stdc++.h>
using namespace std;
void print(stringstream& ss)
{
    // if we want to take stringstream 
    // as the input of the print function
    // & is must in order to work
    string word;
    if(ss>>word) // group e ki word ase or nai
    {
        // reverse order
        print(ss);
        cout<<word<<endl;
    }
}
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    // string word;
    // while(ss>>word){
    //     cout<<word<<endl;
    // }
    print(ss);
    return 0;
}