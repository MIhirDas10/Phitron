#include <stdio.h>
int main()
{
    int i;
    // i=1;                    // initialize
    // while(i<=5)             // condition
    // {
    //     printf("%d\n",i);
    //     i+=1;               // increment
    // }

    // do while
    i=100;
    do
    {
        printf("%d\n",i);
        i+=1;
    }
    while(i<=15); // wrong condition
    // prints 1 time and then checks the condition
    return 0;
}