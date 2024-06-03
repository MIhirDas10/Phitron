// #include<stdio.h>
// #include<iostream>
// #include<algorithm>
// -------------------MIN MAX-------------------------
// using namespace std;
// int main(){
//     // int a,b,c,d;
//     // cin>>a>>b>>c>>d;
//     // if(a<b)
//     //     cout<<a;
//     // else
//     //     cout<<b; 

//     // int mn=min({a,b,c,d});
//     // int mx=max({a,b,c,d});
//     // cout<<mn<<" "<<mx<<endl;
//     return 0;
// } 
// --------------------------------------------

// --------------------SWAP--------------------
#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<utility>
// void my_swap(int *a,int *b)
// {
//     int tmp=*a;
//     *a=*b; // dereference
//     *b=tmp;
// }
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    // my_swap(&a,&b); // address
    swap(a,b);
    cout<<a<<" "<<b<<endl;
}
// --------------------------------------------