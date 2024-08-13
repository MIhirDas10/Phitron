#include<bits/stdc++.h>
using namespace std;
void fun(int* &p)
{
    // !--- dereferencing happens here ---!
    // if you don't put (* sign) before
    // no matter what you do nothings gonna happen
    // because -> by using * we are going to the 
    // address/memory of the pointer
    // ----------- referenceing -----------
    // or just put (& sign) in front of p in the function
    // ------------------------------------
    p = NULL;
}
int main()
{
    int val = 10;
    int* ptr = &val;
    fun(ptr);
    cout<<ptr<<endl;
    return 0;
}