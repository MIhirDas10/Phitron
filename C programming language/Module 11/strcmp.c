#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    int v=strcmp(a,b);
    // -1(less than 0), 0(confirmed), 1(more than 0)
    // -1 = A small
    // 0 = same
    // 1 = B small
    if(v<0){
        printf("A is smaller\n");
    }
    else if(v>0){
        printf("B is smaller\n");
    }
    else{
        printf("A & B are equal\n");
    }
    return 0;
}