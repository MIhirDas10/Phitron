#include<stdio.h>
int main()
{
    int n,s,k;
    scanf("%d",&n);
    s=n-1;
    k=1;
    for(int i=1;i<=(2*n-1);i++)
    {
        // same line ----------
        for(int j=1;j<=s;j++)
        {
            printf(" ");
        }
        for(int j=1;j<=k;j++)
        {
            printf("*");
        }
        // same line ----------
        if(i<=n-1) // upper side
        {
            s--;
            k+=2;
        }
        else       // lower side
        {
            s++;
            k-=2;
        }
        printf("\n");
    }
    return 0;
}