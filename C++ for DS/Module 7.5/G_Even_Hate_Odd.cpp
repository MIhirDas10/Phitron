#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int even_num=0,odd_num=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0){
                even_num++;
            }
            else{
                odd_num++;
            }
        }
        if(n%2!=0){
            cout<<-1<<endl;
        }
        else{
            int target=n/2;
            if(even_num==target){
                cout<<0<<endl;
            }
            else if(even_num>target){
                cout<<even_num-target<<endl; // 2-2 = 0
            }
            else{
                cout<<target-even_num<<endl; // 2-0 = 2
            }
        }
    }
    
    return 0;
}
