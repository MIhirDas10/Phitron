#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int sum=a+b;
    printf("%d\n",sum);
    int diff=a-b;
    printf("%d\n",diff);
    int mul=a*b;
    printf("%d\n",mul);
    float div=a*1.0/b;
    printf("%0.2f\n",div);
    return 0;
}