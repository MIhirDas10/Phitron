#include<stdio.h>
void fun(int n)
{
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int min=a[0],max=a[0];
    for(int i=1;i<n;i++){
        if(a[i]<min){
            min=a[i];
        }
        if(a[i]>max){
            max=a[i];
        }
    }
    printf("%d %d\n",min,max);
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n);
    return 0;
}