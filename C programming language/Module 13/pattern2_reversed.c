#include<stdio.h>

int main()
{
    int n, s, k;
    scanf("%d", &n);
    s = 0;
    k = 2 * n - 1;
    for(int i = n; i > 0; i--)
    {
        for(int j = n; j > s; j--) {
            printf(" ");
        }
        for(int j = n; j > k; j--) {
            printf("*");
        }
        printf("\n");
        s++;
        k -= 2;
    }
    return 0;
}
