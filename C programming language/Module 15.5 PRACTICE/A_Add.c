#include<stdio.h>
int fun()
{
    int x,y;
    scanf("%d %d",&x,&y);
    int sum=x+y;
    return sum;
}
int main()
{
    int s=fun();
    printf("%d",s);
    return 0;
}