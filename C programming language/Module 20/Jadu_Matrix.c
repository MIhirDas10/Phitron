#include<stdio.h>
int main(){
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col];
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    int flag=0;
    // Checking if it's a square matrix
    if(row!=col) {
        flag=1;
    }
    // for primary diagonal
    for(int i=0;i<row;i++) {
        if(a[i][i]!=1){
            flag=1; // Not a Jadu matrix (NO)
        }
    }
    // for secondary diagonal
    for(int i=0;i<row;i++) {
        if(a[i][row-1-i]!=1) {
            flag=1; // Not a Jadu matrix (NO)
        }
    }
    // for non-diagonal elements
    for(int i=0;i<row;i++) {
        for(int j=0;j<col;j++) {
            if(i!=j&&i+j!=row-1&&a[i][j]!=0){
                flag=1;
            }
        }
    }
    if(flag==0){
        printf("YES\n");
    } 
    else{
        printf("NO\n");
    }
    return 0;
}
