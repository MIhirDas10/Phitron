#include<stdio.h>
int main()
{ 
    char a[6]; // 5 + 1(null---\0) = 6
    scanf("%s",&a);
    printf("%s\n",a);
    return 0;
// wrong --- below one --- because i am taking more than i defined in array
    // char a[10];
    // scanf("%s",&a);
    // int sz=sizeof(a)/sizeof(char);
    // printf("%d",sz);
    return 0;
}