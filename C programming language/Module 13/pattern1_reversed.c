#include<stdio.h>
int main()
{
    int n,k=n;
    scanf("%d %d",&n);
    for(int i=n;n>0;n--)
    {
        for(int j=n;j>0;j--)
        {
            printf("*",j);
        }
        k--;
        printf("\n");
    }
    return 0;
}