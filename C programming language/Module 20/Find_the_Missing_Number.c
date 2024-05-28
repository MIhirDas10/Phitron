#include <stdio.h>
long long find_missing_number(long long M,long long A,long long B,long long C){
    if (A==0||B==0||C==0)
        return 0;
    long long product_ABC=A*B*C;
    if (M%product_ABC!=0)
        return -1; 
    long long missing_number=M/product_ABC;
    return missing_number;
}
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        long long M, A, B, C;
        scanf("%lld %lld %lld %lld",&M,&A,&B,&C);
        long long missing_number=find_missing_number(M,A,B,C);
        printf("%lld\n",missing_number);
    }
    return 0;
}
