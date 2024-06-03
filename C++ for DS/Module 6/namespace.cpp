#include<bits/stdc++.h>
using namespace std;
namespace Rakib
{
    int age1=24;
    void hello1()
    {
        cout<<"Rakib namespaces"<<endl;
    }
}
namespace Sakib
{
    int age2=25;
    void hello2()
    {
        cout<<"Rakib namespaces"<<endl;
    }
}
using namespace Rakib;
using namespace Sakib;
int main()
{
    // cout<<Rakib::age1<<endl;
    // cout<<Sakib::age2<<endl;
    cout<<age1<<endl;
    cout<<age2<<endl;
    hello1();
    Sakib::hello2();
    return 0;
}