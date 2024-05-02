#include<stdio.h>
#include<string.h>
int main()
{
// gets---------------
    // Mihir Das Utsho (input)
    // total size = 15 + null(1) = 16
    // char a[16];
    // gets(a);
    // printf("%s",a);
// -------------------


// fgets--------------
    char a[100]; // can take more but not less
    // fgets(a,16,stdin);
    // fgets(a,16,stdin);


    // also can take enter as input
    fgets(a,16,stdin);
    // a[17]='\0';
    printf("%s",a);
// -------------------
    return 0;
}