#include <bits/stdc++.h>
using namespace std;
int fun(int arr[],int n,int sum){
    int flag=0;
    sort(arr,arr+n);
    for(int i=0;i<n-2;i++){
        // search two elems
        int j=i+1;
        int k=n-1;
        while (j<k){
            int current=arr[i]+arr[j]+arr[k];
            if(current==sum){
                return 0;
            }
            else if(current<sum){
                j++;
            }
            else{
                k--;
            }
        }
    }
    return 1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,s;
        cin>>n>>s;
        int arr[n];
        for (int i=0;i<n;i++){
            cin>>arr[i];
        }
        if (fun(arr,n,s)==0){
            cout<<"YES"<< endl;
        } 
        else if(fun(arr,n,s)==1){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}