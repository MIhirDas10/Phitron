#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int s=0;
    int l=n-2;

// upper
    for(int i=0; i<n/2; i++){
        for(int j=0; j<s; j++){
            cout<<" ";
        }
        cout<<"\\";
        for(int j=0; j<l; j++){
            cout<<" ";
        }
        cout<<"/"<<endl;
        s++;
        l-=2;
    }

// middle
    for(int j=0; j<s; j++){
        cout<<" ";
    }
    cout<<"X"<<endl;

    // reset
    s--;
    l += 2;

// lower
    for(int i=(n/2)-1; i>=0; i--){
        for(int j=0; j<s; j++){
            cout<<" ";
        }
        cout<<"/";
        for(int j=0; j<l; j++){
            cout<<" ";
        }
        cout<<"\\"<<endl;
        s--;
        l+=2;
    }
    return 0;
}