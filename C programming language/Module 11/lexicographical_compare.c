// apple<apply
// apple<applicant
// abcd>abc
// abd<abde
// abd==abd
// abc<edf
#include<stdio.h>
int main()
{
    char a[100],b[100];
    scanf("%s %s",a,b);
    int i=0;
    while(1){
        if(a[i]=='\0' && b[i]=='\0'){
            printf("Same\n");
            break;
        }
        else if(a[i]=='\0'){
            printf("A small\n");
            break;
        }
        else if(b[i]=='\0'){
            printf("B small\n");
            break;
        }
        if(a[i]==b[i]){
            i++;
        }
        else if(a[i]<b[i]){
            printf("A small\n");
            break;
        }
        else{
            printf("B small\n");
            break;
        } 
    }
    return 0;
}