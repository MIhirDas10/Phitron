#include<bits/stdc++.h>
using namespace std;
int power(int base, int exp){
    int result=1;
    for(int i=0; i<exp; ++i){
        result *= base;
    }
    return result;
}
void equation(int X, int N){
    int total=0;
    for(int i=0; i<=N; i+=2){
        int res=power(X, i);
        if (i == 0){
            res -= 1;
        }
        total += res;
    }
    cout<<total<<endl;
}
int main(){
    int X, N;
    cin>>X >>N;
    equation(X, N);
    return 0;
}
