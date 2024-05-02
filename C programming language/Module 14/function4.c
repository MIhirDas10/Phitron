// No Return + No Parameter
#include<stdio.h>
void sum(void)
// void type er function kono kisu recieve korte pare na
{
    int a,b;
    scanf("%d %d",&a,&b);
    int s=a+b;
    printf("%d\n",s);
}
int main()
{
    sum();
    sum();
    return 0;
}