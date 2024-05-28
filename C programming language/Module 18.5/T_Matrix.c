#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int primary_sum=0,secondary_sum=0;
    // sum of primary
    for(int i=0;i<n;i++){
        primary_sum+=a[i][i];
    }
    //sum of secondary
    for(int i=0;i<n;i++){
        secondary_sum+=a[i][n-i-1];
    }
    int difference=abs(primary_sum-secondary_sum);
    printf("%d\n",difference);
    return 0;
}
