#include<stdio.h>
int main()
{
    int a,num,var;
    scanf("%d",&a);
    num=a/3;
    var=a%3;
    if(var==0){
        printf("%d",num);
    }
    else if(var==1){
        printf("%d",num+1);
    }
    else if(var==2){
        printf("%d",num+2-1);
    }
    return 0;
}