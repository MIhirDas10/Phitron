#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,y,z;
    cin>>x>>y>>z;
    // x=cost, y=loss, z=profit
    double sell_price=x/(1-(y/100));
    double new_sell_price=sell_price*(1+(z/100));
    // to set 2 decimal points
    cout<<fixed<<setprecision(2)<<new_sell_price<<endl;
    return 0;
}