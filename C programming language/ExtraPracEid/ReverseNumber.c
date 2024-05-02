// #include<stdio.h>
// int main()
// {
//     char string[4];
//     scanf("%s", string);
//     for(int i=4;i<=0;i=i-1){
//         printf("%d ",i);
//     }
//     printf("%s",string);

// }


// #include<stdio.h>
// int main()
// {
//     int a,num,i,var;
//     scanf("%d",&a);
//     num=a/1000;
//     var=a%10;
//     for(i=var;i>=num;i=i-1){
//         printf("%d",i);
//     }

//     // num=a%100;
//     // printf("%d",num);
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     int N, reversed_number = 0, remainder;
//     scanf("%d",&N);
//     while (N != 0) {
//             remainder = N % 10;
//             reversed_number = reversed_number * 10 + remainder;
//             N /= 10;
//         }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int N,rev_num=0,num,var;
    scanf("%d",&N);
    while (N!=0){
        num=rev_num*10;
        var=N%10;
        rev_num=num+var;
        N=N/10; //decrement
    }
    printf("%d",rev_num);
    return 0;
}
