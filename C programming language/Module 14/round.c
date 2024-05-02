#include<stdio.h>
#include<math.h>
int main()
{
    double x;
    scanf("%lf",&x);
    int ans=round(x);
    printf("%d",ans);
    return 0;
}

// 3.2 = 3
// 3.4 = 3
// 3.44449 = 3
// 3.5 = 4
// 3.7 = 4
// 3.99 = 4