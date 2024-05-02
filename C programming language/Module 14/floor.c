#include<stdio.h>
#include<math.h>
int main()
{
    double x;
    scanf("%lf",&x);
    int ans=floor(x);
    printf("%d",ans);
    return 0;
}


// 3.0 = 3
// 3.00001 = 3
// 3.3 = 3
// 3.99 = 3