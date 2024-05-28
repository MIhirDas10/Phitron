#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    int r=2;
    printf("Exact row: %d\n",r);
    for(int i=0;i<col;i++){
        printf("%d ",a[2][i]);
    }
    printf("\n");
    int c=1;
    printf("Exact col: %d\n",c);
    for(int i=0;i<row;i++){
        printf("%d ",a[i][1]);
    }
    return 0;
}