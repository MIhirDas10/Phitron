#include <stdio.h>
int main()
{
    int i;
    // long long int sum=0;
    int sum=0;
    //for(initialization; condition; increment or decrement)
    for(i=1;i<=5;i++)   // i+=1, i++
    {
        sum+=i;
    }
    printf("%d\n",sum);
    // printf("%lld",sum);
    return 0;
}