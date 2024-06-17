#include<bits/stdc++.h>
using namespace std;
bool isPrime(int num){
    if(num <= 1) return false;
    for(int i=2; i<=sqrt(num); i++){
        if(num%i == 0) return false;
    }
    return true;
}

int main(){
    int N;
    cin>>N;
    vector<int>primes;
    for(int i=2; i<=N; i++){
        if(isPrime(i)){
            primes.push_back(i);
        }
    }    
    for(int i=0; i < primes.size(); i++){
        if(i>0) cout<<" ";
        cout<<primes[i];
    }
    cout << endl;
    return 0;
}
