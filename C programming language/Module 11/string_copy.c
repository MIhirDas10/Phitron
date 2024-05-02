#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b); // doesn't need &
    // printf("%s %s",a,b);
    // manually --- doing
    // for(int i=0;i<=strlen(b);i++){
    //     a[i]=b[i];
    // }    
    
    // built in --- function
    strcpy(a,b);
    // ---------------------
    printf("%s",a);
    return 0;
}