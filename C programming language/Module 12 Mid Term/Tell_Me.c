#include<stdio.h>
int main()
{
    int t,k=0;
    scanf("%d",&t);
    while(t>k)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        long long int x;
        scanf("%lld",&x);
        int found=0;
        for(int i=0;i<n;i++){
            if(arr[i]==x){
                found=1;
                break; 
            }
        }
        if(found==1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }    
        
        k++;
    }
    return 0;
}