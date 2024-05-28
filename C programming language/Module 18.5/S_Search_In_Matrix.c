#include<stdio.h>
#include<stdbool.h> // Include this header for boolean type
int main(){
    int row,col;
    scanf("%d %d",&row,&col);
    // Declare the matrix with given size N*M
    int a[row][col];
    // Input matrix elements
    for(int i=0;i<row;i++){
        for(int j=0; j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int n;
    scanf("%d",&n);
    bool found=false; 
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(a[i][j]==n){
                found=true;
                break; 
            }
        }
        if(found) break; 
    }
    if(found){
        printf("will not take number\n");
    } else{
        printf("will take number\n");
    }
    return 0;
}
