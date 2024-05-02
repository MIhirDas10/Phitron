#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int arr[n];
    for(int i=0;i<n;i++){
        scanf("%lld",&arr[i]);
    }
    long long int c2=0,c3=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            c2++;
        }
        else if(arr[i]%2==0 && arr[i]==3){
            c2++;
        }
        else if(arr[i]%3==0){
            c3++;
        }
    }
    printf("%lld %lld",c2,c3);
    return 0;
}