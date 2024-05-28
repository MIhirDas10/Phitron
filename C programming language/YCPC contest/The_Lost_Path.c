#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(b!=0){
        int sum=a%b;
        printf("%d",sum);
    }
    else{
        printf("-1");
    }
    return 0;
}