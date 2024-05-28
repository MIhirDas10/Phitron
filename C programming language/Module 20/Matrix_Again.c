#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col];
    // for input
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }
    // for row stuff
    int row_mod=row-1;
    for(int i=0;i<row-row_mod;i++){
        for(int j=0;j<col;j++){
            printf("%d ",a[row-1][j]);
        }
        printf("\n");
    }
    // for column stuff
    int col_mod=col-1;
    for(int i=0;i<row;i++){
        for(int j=0;j<col-col_mod;j++){
            printf("%d ",a[i][col-1]);
        }
    }
    return 0;
}