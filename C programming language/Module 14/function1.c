#include<stdio.h>

// return_type name(parameter)
// {
//     code;
//     return what;
// }

// standard way --- function before main function
int sum(int x,int y)
{
    int sum=x+y;
    return sum;
}
int main()
{
    int num=sum(10,20); //have to save it in a variable
    printf("%d\n",num);
    printf("%d\n",sum(100,150));
    return 0;
}

// another way --- function after main function
// int sum(int x,int y);
// int main()
// {
//     int num=sum(10,20); //have to save it in a variable
//     printf("%d\n",num);
//     printf("%d\n",sum(100,150));
//     return 0;
// }
// int sum(int x,int y)
// {
//     int sum=x+y;
//     return sum;
// }