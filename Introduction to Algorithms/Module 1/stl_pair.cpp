// writing this manually

// #include<bits/stdc++.h>
// using namespace std;
// class Pair
// {
//     public:
//     int first, second;
//     void make_pair(int a, int b){
//         first = a;
//         second = b;
//     }
// };
// int main()
// {
//     Pair p;
//     // p.first = 10;
//     // p.second = 20;
//     p.make_pair(10, 20);
//     cout<<p.first<<" "<<p.second<<endl;  
//     return 0;
// }


// we have an STL pair for it

#include<bits/stdc++.h>
using namespace std;
int main()
{
    pair<string, int> p;
    p = make_pair("mihir", 20); // built-in function
    cout<<p.first<<" "<<p.second<<endl;
    return 0;
}