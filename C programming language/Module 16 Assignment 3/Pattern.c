#include<stdio.h>
void pattern(int n){
    int i,j;
    // Upper part
    for(i=0;i<n;i++) {
        for (j=0;j<n-i-1;j++)
            printf(" ");
        for (j=0;j<2*i+1;j++){
            if (i%2==0)
                printf("#");  // in even lines - "#"
            else
                printf("-");  // in odd lines - "-"
        }
        printf("\n");
    }
    // Lower part
    for(i=n-2;i>=0;i--){
        for(j=0;j<n-i-1;j++)
            printf(" ");
        for(j=0;j<2*i+1;j++){
            if (i%2==0)
                printf("#");
            else
                printf("-");
        }
        printf("\n");
    }
}

int main(){
    int n;
    scanf("%d",&n);
    pattern(n);
    return 0;
}
