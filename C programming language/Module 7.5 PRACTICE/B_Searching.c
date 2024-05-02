#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int arr[n];
    long long int x,num;
    for(long long int i=0;i<n;i++){
        scanf("%lld",&arr[i]);   
    }
    scanf("%lld",&x);
    // if(arr[i]==x){
    //     num=i;
    // } 
    printf("%lld",x);
    return 0;
}