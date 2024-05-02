#include<stdio.h>
#include<math.h>
int main()
{
    // int a,b;
    // scanf("%d %d",&a,&b);
    // int ans=pow(a,b);
    // printf("%d",ans);

    double a,b;
    scanf("%lf %lf",&a,&b);
    double ans=pow(a,b);
    printf("%.2lf",ans);
    return 0;
}