#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,k;
    scanf("%d %d",&a,&b);
    scanf("%d",&k);
    int sum=abs(a-b);
    if(sum>k){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}