#include<stdio.h>
void fun(int *p)
{
    *p=250; //dereference
}
int main()
{
    int x=100;
    printf("Value of x - %d\n",x);
    fun(&x); // calling the function directly by it's address
    printf("Updated value - %d\n",x);
    return 0;
}