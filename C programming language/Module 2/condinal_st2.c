#include<stdio.h>
int main()
{
    int tk;
    scanf("%d",&tk);
    if(tk>=100)
    {
        printf("Burger khabo");
    }
    // else if(60<=tk<100)
    else if(tk>=50)
    {
        printf("Fuchka khabo");
    }
    else
    {
        printf("kisui khabo na");
    }
    return 0;
}