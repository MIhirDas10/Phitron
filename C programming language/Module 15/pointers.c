#include<stdio.h>
int main()
{
    int x=100;
    int * ptr=&x;
    x=200;
    printf("Address of x: %p\n",&x);
    printf("Value of ptr: %p\n",ptr);
    printf("Address of ptr: %p\n",&ptr);
    printf("Size of ptr: %d\n",sizeof(ptr));
    // takes 4 byte 
    printf("%d\n",x);     // same thing
    printf("%d\n",*ptr);  // same thing
    return 0;
}