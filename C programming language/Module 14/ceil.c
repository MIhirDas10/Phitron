#include<stdio.h>
#include<math.h>
int main()
{
    double x;
    scanf("%lf",&x);
    int ans=ceil(x);
    printf("%d",ans);
    return 0;
}

// 3.000 = 3
// 3.000000001 = 4
// 3.2 = 4
// 3.99 = 4