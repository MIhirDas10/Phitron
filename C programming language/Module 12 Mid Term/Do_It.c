#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int i,j;
    for(i=0;i<n;i++){
        for(j=1;j<=k;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}