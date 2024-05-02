#include<stdio.h>
// global
int x=500;


// local
void fun(void)
{
    int s=100;
    printf("address %p\n",&s);
}
int main()
{
    int s=200;
    printf("address %p\n",&s);
    printf("%d\n",x);
    fun();
    return 0;
}