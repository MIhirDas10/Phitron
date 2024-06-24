// #include<bits/stdc++.h>
// using namespace std;
// int fibonacci(int n){
//     if(n==1){
//         return 0;
//     }
//     else if(n==2){
//         return 1;
//     }
//     else{
//         return fibonacci(n-1)+fibonacci(n-2);
//     }
// }
// int main(){
//     int N;
//     cin>>N;
//     cout<<fibonacci(N)<<endl;
//     return 0;
// }






#include<bits/stdc++.h>
using namespace std;
int makeSum(int x, int y)
{
    for(int i=x; i<=y; i++){
            allSum += i;
        }
        cout<<allSum<<endl;
        for(int i=x; i<=y; i++){
            if(i%2 == 0) evenSum += i;
        }
        cout<<evenSum<<endl;
        for(int i=x; i<=y; i++){
            if(i%2 == 1) oddSum += i;
        }
        cout<<oddSum<<endl;
}
int main()
{
    int x,y;
    cin>>x>>y;
    int allSum=0;
    int evenSum=0;
    int oddSum=0;
    if(x<y){
        for(int i=x; i<=y; i++){
            allSum += i;
        }
        cout<<allSum<<endl;
        for(int i=x; i<=y; i++){
            if(i%2 == 0) evenSum += i;
        }
        cout<<evenSum<<endl;
        for(int i=x; i<=y; i++){
            if(i%2 == 1) oddSum += i;
        }
        cout<<oddSum<<endl;
    }
    else if(x>y){
        int temp = x;
        x = y;
        y = temp;
        for(int i=x; i<=y; i++){
            allSum += i;
        }
        cout<<allSum<<endl;
        for(int i=x; i<=y; i++){
            if(i%2 == 0) evenSum += i;
        }
        cout<<evenSum<<endl;
        for(int i=x; i<=y; i++){
            if(i%2 == 1) oddSum += i;
        }
        cout<<oddSum<<endl;
    }
    return 0;
}