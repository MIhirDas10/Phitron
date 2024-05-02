// #include<stdio.h>
// void fun(int ar[],int n)  // size of an array
// // void fun(int *ar,int n) // pointer hishebeo neoa jay
// {
//     for(int i=0;i<n;i++){
//         printf("%d ",ar[i]);
//     }
//     // int size=sizeof(ar)/sizeof(int);
//     // printf("%d",size);
// }
// int main()
// {
//     int ar[5]={10,20,30,40,50};
//     fun(ar,5);
//     return 0;
// }


// another approach for double
#include<stdio.h>
void fun(double *ar,int n)  // size of an array
{
    for(int i=0;i<n;i++){
        printf("%0.2llf ",ar[i]);
    }
}
int main()
{
    double ar[5]={10.50,20.20,30.10,40.60,50.00};
    fun(ar,5);
    return 0;
}



// we can't return an array from a function
// we can receive an array from a function