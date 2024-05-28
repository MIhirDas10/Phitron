#include<stdio.h>
long long int fun(int n,int index,long long int *a)
{
    if(index>=n) return 0;
    return a[index]+fun(n,index+1,a);
}
int main()
{
    int n;
    scanf("%d",&n);
    long long int a[n];
    for(int i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    printf("%lld",fun(n, 0, a));
    return 0;
}