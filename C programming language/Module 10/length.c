#include<stdio.h>
int main()
{
    char a[5];
    int sz=sizeof(a)/sizeof(char);
    // 5/1 = 5
    printf("%d",sz);
    return 0;
}

// size of different datatypes
// int --- 4
// long long int --- 8
// char --- 1