#include<bits/stdc++.h>
using namespace std;
int* sort_it(int n)
{
    int* a=new int[n]; // dynamic array
    for(long long int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n,greater<int>());
    return a;
}
int main()
{
    int n;
    cin>>n;
    int* sort_array=sort_it(n);
    for(long long int i=0;i<n;i++){
        cout<<sort_array[i]<<" ";
    }
    delete[] sort_array;
    return 0;
}