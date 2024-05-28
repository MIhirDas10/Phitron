#include<stdio.h>
void fun(int n,long long int *a,int index)
{
    if(index>=n) return;
    fun(n,a,index+2);
    printf("%lld ",a[index]);
}
int main()
{
    int n;
    scanf("%d",&n);
    long long int a[n];
    for(int i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    fun(n,a,0);
    return 0;
}