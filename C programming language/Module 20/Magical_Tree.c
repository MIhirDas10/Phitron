#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int line=(n+1)/2+5;
    int s,k;
    s=line-1;
    k=1;
    // upper part
    for(int i=0;i<line;i++){
        // spaces
        for(int j=0;j<s;j++){
            printf(" ");
        }
        // lines
        for(int j=1;j<=k;j++){
            printf("*");
        }
        s--;
        k+= 2;
        printf("\n");
    }
    // bottom part
    for (int i=0;i<5;i++){
        for(int j=0;j<line-(n/2)-1;j++){
            printf(" ");
        }
        for(int j=0;j<n;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
