#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int posSum=0,negSum=0;
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>0){
            posSum+=arr[i];
        }
        else{
            negSum+=arr[i];
        }
    }
    printf("%d %d",posSum,negSum);
    return 0;
}