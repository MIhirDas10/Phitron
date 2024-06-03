#include<stdio.h>
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double a;
    cin>>a;
    // cout<<a<<endl;
    // !---setprecision---!
    cout<<fixed<<setprecision(4)<<a<<endl;
    // printf("%0.2lf\n",a); // c code
    return 0;
}
// --------------