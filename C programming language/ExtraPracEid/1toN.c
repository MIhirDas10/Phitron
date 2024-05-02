#include<stdio.h>
int main()
{
    long long int a,i,total=0;
    scanf("%lld",&a);
    for(i=1;i<=a;i++){
        total=total+i;
    }
    printf("%lld\n",total);
    return 0;
}