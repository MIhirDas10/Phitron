#include<stdio.h>
void fun(int *copy,int n)
{
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(copy[i]>copy[j]){
                int temp=copy[i];
                copy[i]=copy[j];
                copy[j]=temp;
            }
        }
    }
    
    for(int i=0;i<n;i++){
        printf("%d\n",copy[i]);
    }
}
int main()
{
    // main function e input
    int n=3;
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    // creating a copy of the main array
    int copy[100];
    for(int k=0;k<n;k++){
        copy[k]=a[k];
    }
    // fun function call
    fun(a,n);
    printf("\n");
    for(int k=0;k<n;k++){
        printf("%d\n",copy[k]);
    }
    return 0;
}