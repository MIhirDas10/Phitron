#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>0){
        for(int i=1;i<=a;i++){
            printf("%d\n",i);
        }
    }
    else{
        int j=0;
        for(a;j>=a;j--){
            printf("%d\n",j);
        }
    }
    return 0;
}