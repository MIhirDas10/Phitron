#include<stdio.h>
void fun(int n)
{
    printf("1");
    for(int i=2;i<=n;i++){
        printf(" %d",i);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n);
    return 0;
}