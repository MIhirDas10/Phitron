#include<stdio.h>
#include<string.h>
int is_palindrome(char *a){
    int len=strlen(a);
    for(int i=0;i<(len/2);i++){
        if(a[i]!=a[len-i-1]){
            return 1;
        }
    }
    return 0;
}
int main(){
    char a[1001];
    scanf("%s",a);
    int x=is_palindrome(a);
    if(x==0){
        printf("Palindrome\n");
    }
    else{
        printf("Not Palindrome\n");
    }
    return 0;
}
