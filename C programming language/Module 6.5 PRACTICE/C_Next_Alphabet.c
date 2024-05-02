#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(a=='z'){
        printf("a");
    }
    else if(a=='Z'){
        printf("A");
    }
    else{
        int num=("%d",a)+1;
    printf("%c",num);
    }
    return 0;
}