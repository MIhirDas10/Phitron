#include<stdio.h>
int main()
{
    int a,b,max=0;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        scanf("%d",&b);
        if(b>max){
            max=b;
        }
    }
    printf("%d\n",max);
    return 0;
}