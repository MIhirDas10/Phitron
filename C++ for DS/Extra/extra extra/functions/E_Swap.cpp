#include<bits/stdc++.h>
using namespace std;
void swapping(int x, int y)
{
    int temp = x;
    x=y;
    y=temp;
    cout<<x<<" "<<y;
}
int main()
{
    int x,y;
    cin>>x>>y;
    swapping(x,y);
    return 0;
}