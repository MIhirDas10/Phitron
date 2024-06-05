#include<bits/stdc++.h>
using namespace std;
void reverse(int* a,int index){
    int start=0;
    int end=index-1;
    while(start<end){
        swap(a[start],a[end]);
        start++;
        end--;
    }
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]==0){
            reverse(a,i);
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
