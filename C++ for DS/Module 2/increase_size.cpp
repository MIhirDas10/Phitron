#include<bits/stdc++.h>
using namespace std;
int main()
{
    int* a=new int[3];
    int* b=new int[3];
    for(int i=0;i<3;i++){
        cin>>a[i];
        b[i]=a[i]; // copy
    }
    cout<<"b array before: "<<endl;
    for(int i=0;i<3;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    // ----------------------
    delete[] a; // if we don't include the [ array ] sign then it will just delete the first element of the array
    // so to delete the entire array, we will have to use this sign
    // for(int i=0;i<3;i++){
    //     cout<<a[i]<<" ";
    // }

    a=new int[5];
    for(int i=0;i<5;i++){
        a[i]=b[i]; // copying from the copy
    }
    // retrieved the a array
    delete[] b; // now delteing the b array
    cout<<"b array after: "<<endl;
    for(int i=0;i<3;i++){
        cout<<b[i]<<" "<<endl;
    }
    a[3]=40;
    a[4]=50;
    cout<<"Increased a array: "<<endl;
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}