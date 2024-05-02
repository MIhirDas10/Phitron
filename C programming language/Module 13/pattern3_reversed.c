#include<stdio.h>
int main()
{
    int n,k=n;
    scanf("%d",&n);
    for(int i=n;n>=1;n--)
    {
        for(int j=n;j>=1;j--)
        {
            printf("%d",j);
        }
        k--;
        printf("\n");
    }
    return 0;
}