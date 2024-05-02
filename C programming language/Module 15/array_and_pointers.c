#include<stdio.h>
int main()
{
    int arr[5]={10,20,30,40,50};
    printf("%p\n",&arr[0]);
    printf("%p\n",arr);  // whole thing has the same address
    printf("%d\n",arr[0]);
    printf("%d\n",*arr);
    // int *arr = &arr[0]

// accessing
    // ar[1]   -> *(ar+1)
    // *(ar+1) -> ar[1]
    // *(1+ar) -> ar[1] / 1[ar]

    // ar[1]   ->   *(ar+1)
    // 1[ar]   ->   *(1+ar)

    //-------- same things --------//
    printf("%d\n",*(arr+1));
    printf("%d\n",*(1+arr));
    printf("%d\n",arr[1]);
    printf("%d\n",1[arr]);
    return 0;
}