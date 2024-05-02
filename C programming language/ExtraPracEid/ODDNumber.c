#include<stdio.h>
int main()
{
    int a,num,i,var1,var2;
    scanf("%d",&a);
    num=a/4;
    var1=num-3;
    var2=num+3;
    for(i=var1;i<=var2;i=i+2){
        printf("%d ",i);
    }
    return 0;
}