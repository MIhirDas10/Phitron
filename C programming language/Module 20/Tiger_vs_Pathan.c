#include<stdio.h>
int main()
{
    int testcase;
    scanf("%d",&testcase);
    for(int i=0;i<testcase;i++){
        int n;
        scanf("%d",&n);
        // char a[100];
        char a[n+1];
        scanf("%s",a);
        int pCount=0,tCount=0;
        for(int j=0;j<n;j++){
            if(a[j]=='T'){
                tCount++;
            }
            else if(a[j]=='P'){
                pCount++;
            }
        }
        if(pCount>tCount){
            printf("Pathaan\n");
        }
        else if(pCount<tCount){
            printf("Tiger\n");
        }
        else if(pCount==tCount){
            printf("Draw\n");
        }
    }
    return 0;
}