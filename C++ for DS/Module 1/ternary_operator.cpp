// ____________________________________________
    // ternary operator --- short term if else
    // convention   __________
    // (condition)?True:False:
    // _______________________
#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // if(n%2==0)
    // {
    //     cout<<"Even"<<endl;
    // }
    // else
    // {
    //     cout<<"Odd"<<endl;
    // }
    
    (n%2==0)?cout<<"Even"<<endl:cout<<"Odd"<<endl;
    return 0;
} 