// if else elseif
#include<stdio.h>
int main()
// {
//     int tk;
//     scanf("%d",&tk);
//     if(tk>=100)
//     {
//         printf("Burger khabo");
//     }
//     else
//     {
//         printf("Khabo na");
//     }
//     return 0;
// }

{
    int tk;
    scanf("%d",&tk);
    if(tk>=100)
    {
        printf("Burger khabo");
    }
    else if(60<=tk<100)
    {
        printf("Fuchka khabo");
    }
    else
    {
        printf("kisui khabo na");
    }
    return 0;
}