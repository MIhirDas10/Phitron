#include<stdio.h>
int fun(char a[],int i)
{
    if(a[i]=='\0') return 0;
    int l=fun(a,i+1);
    return l+1;
}
int main()
{
    char a[5]="Hello";
    int length=fun(a,0);
    printf("%d\n",length);
    return 0;
}

// __________________________________
// ----------- call stack -----------
// __________________________________
// fun("hello",5); -- a[5]='\0'(nul)
// fun("hello",4); -- return 1
// fun("hello",3); -- return 2
// fun("hello",2); -- return 3
// fun("hello",1); -- return 4
// fun("hello",0); -- return 5
// main()          -- print(5)
// __________________________________