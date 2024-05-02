#include<stdio.h>
void fun(int x)
{
    printf("fun function's address - %p\n",&x);
    x=200;
}
int main()
{
    int x=10;
    printf("main x Address - %p\n",&x);
    fun(x);
    printf("main x Address - %d\n",x);
    return 0;
}