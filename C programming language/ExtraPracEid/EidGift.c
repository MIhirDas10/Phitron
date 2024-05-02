#include<stdio.h>
int main()
{
    long long int m,n,num,leftover;
    scanf("%lld %lld",&m,&n);
    num=m/n;
    leftover=m%n;
    printf("%lld %lld",num,leftover);
    return 0;
}