// No Return + Parameter
#include<stdio.h>
// no return type means --- void
void sum(int x,int y)
{
    int s=x+y;
    printf("%d\n",s);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    sum(a,b);
    return 0;
}