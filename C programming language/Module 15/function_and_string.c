#include<stdio.h>
#include<string.h>
void fun(char ar[])  // *ar
{
    // int size=sizeof(ar)/sizeof(char);
    // printf("%d",size);
    printf("%d",strlen(ar));
}
int main()
{
    char ar[20]="Hello";
    fun(ar);
    return 0;
}