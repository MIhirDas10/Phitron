#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    string b;
    cin>>b;
    int size1=a.size();
    int size2=b.size();
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<a+b<<endl;
    cout<<b[0];
    for(int i=1;i<size1;i++){
        cout<<a[i];
    }
    cout<<" ";
    cout<<a[0];
    for(int i=1;i<size2;i++){
        cout<<b[i];
    }
    return 0;
}