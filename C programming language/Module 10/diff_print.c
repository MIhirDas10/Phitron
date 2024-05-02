#include<stdio.h>
int main()
{
    // char a[5]="Mihir\0"; // will give garbage char
    char a[6]="Mihir";
    // double qoutation auto includes \0 (null)
    printf("%s",a);
    return 0;
}