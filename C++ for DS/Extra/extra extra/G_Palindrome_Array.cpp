#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;    
    long long int A[n];
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    bool isPalindrome = true;
    for(int i=0; i<n/2; i++){
        if(A[i] != A[n-1-i]){
            isPalindrome = false;
            break;
        }
    }
    if(isPalindrome){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
