#include<stdio.h>
int main()
{
    long long int a,b;
    scanf("%lld %lld",&a,&b);
    long long int diff=a-b;
    if(diff<=0){
        printf("0");
    }
    else{
        printf("%lld",diff);
    }
    return 0;
}