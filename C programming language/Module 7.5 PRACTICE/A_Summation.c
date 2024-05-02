#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int arr[n],sum=0;
    for(long long int i=0;i<n;i++){
        scanf("%lld",&arr[i]);
        sum+=arr[i];
    }
    if(sum<0){
        sum=sum*(-1);
    }
    printf("%lld",sum);
    return 0;
}