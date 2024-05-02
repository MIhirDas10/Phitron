#include<stdio.h>
int main()
{
    int total,money,x,y;
    scanf("%d %d",&total,&money);
    total=total-money;
    y=total/2;
    x=y+money;
    printf("%d %d",x,y);
    return 0;
}