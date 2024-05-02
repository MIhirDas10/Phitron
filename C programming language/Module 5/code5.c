#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(48<=a && a<=64){
        printf("IS DIGIT\n");
    }
    if(65<=a && a<=122){
        printf("ALPHA\n");
        if(65<=a && a<=96){
            printf("IS CAPITAL\n");
        }
        else if(97<=a && a<=122){
            printf("IS SMALL\n");
        }
        
    }
    // printf("%d",a);
    return 0;
}