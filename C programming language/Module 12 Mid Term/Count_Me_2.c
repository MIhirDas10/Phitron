// #include<stdio.h>
#include<string.h>
// int main()
// {
//     char a[100];
//     scanf("%s",a);
//     int count=0;
//     for(int i=0;i<strlen(a);i++){
//         if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'){
//         count++;
//         }
//     }
//     int num=strlen(a)-count;
//     printf("%d",num);
//     return 0;
// }

#include <stdio.h>
int main(){
    char a[1000001];
    fgets(a,sizeof(a),stdin);
    int count=0;
    for(int i=0;i<strlen(a);i++) {
        if (a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||
            a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'){
            count++;
        }
    }
    int num=strlen(a)-count;
    printf("%d",num);
    return 0;
}
