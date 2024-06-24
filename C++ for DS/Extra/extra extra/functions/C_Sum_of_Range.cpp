// #include<bits/stdc++.h>
// using namespace std;
// void makeSum(long long int x, long long int y){
//     long long int allSum=0;
//     long long int evenSum=0;
//     long long int oddSum=0;
//     if (x > y){
//         long long int temp = x;
//         x = y;
//         y = temp;
//     }
//     for(int i=x; i<=y; i++){
//         allSum += i;
//         if (i % 2 == 0){
//             evenSum += i;
//         }
//         else{
//             oddSum += i;
//         }
//     }
//     cout<<allSum<<endl;
//     cout<<evenSum<<endl;
//     cout<<oddSum<<endl;
// }
// int main(){
//     long long int x, y;
//     cin>>x>>y;
//     makeSum(x, y);
//     return 0;
// }



// -------------------------
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int x,y;
//     cin>>x>>y;
//     int allSum=0;
//     int evenSum=0;
//     int oddSum=0;
//     if(x<y){
//         for(int i=x; i<=y; i++){
//             allSum += i;
//         }
//         cout<<allSum<<endl;
//         for(int i=x; i<=y; i++){
//             if(i%2 == 0) evenSum += i;
//         }
//         cout<<evenSum<<endl;
//         for(int i=x; i<=y; i++){
//             if(i%2 == 1) oddSum += i;
//         }
//         cout<<oddSum<<endl;
//     }
//     else if(x>y){
//         int temp = x;
//         x = y;
//         y = temp;
//         for(int i=x; i<=y; i++){
//             allSum += i;
//         }
//         cout<<allSum<<endl;
//         for(int i=x; i<=y; i++){
//             if(i%2 == 0) evenSum += i;
//         }
//         cout<<evenSum<<endl;
//         for(int i=x; i<=y; i++){
//             if(i%2 == 1) oddSum += i;
//         }
//         cout<<oddSum<<endl;
//     }
//     return 0;
// }


// ------------------------------------

#include<bits/stdc++.h>
using namespace std;
void makeSum(long long int A, long long int B){
    if(A > B){
        swap(A, B);
    }
    // Sum of all numbers from A to B
    long long int allSum = (B*(B+1))/2 - (A*(A-1))/2;

    // Sum of even numbers from A to B
    long long int evenStart = (A%2 == 0) ? A:A + 1;
    long long int evenEnd = (B%2 == 0) ? B:B - 1;
    long long int evenCount = (evenEnd-evenStart)/2 + 1;
    long long int evenSum = evenCount*(evenStart+evenEnd)/2;

    // Sum of odd numbers from A to B
    long long int oddStart = (A%2 == 1) ? A:A + 1;
    long long int oddEnd = (B%2 == 1) ? B:B - 1;
    long long int oddCount = (oddEnd-oddStart)/2 + 1;
    long long int oddSum = oddCount*(oddStart+oddEnd)/2;
    cout<<allSum<<endl;
    cout<<evenSum<<endl;
    cout<<oddSum<<endl;
}
int main(){
    long long int A, B;
    cin>>A>>B;
    makeSum(A, B);
    return 0;
}