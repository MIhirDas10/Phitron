#include<stdio.h>
int main()
{
    double x=5.26; // takes 8 byte
    double*ptr=&x;
    double*ptr2=ptr;
    *ptr2=10.20;     // dereference
    printf("%0.2llf\n",x);
    printf("%0.2llf\n",*ptr);
    printf("size - %d\n",sizeof(ptr));
    return 0;
}

// sizeof(ptr) --- doesn't depend on
// int/double/long long int
// it's just storing value
// and for that it's taking 4 bytes not for the data types.