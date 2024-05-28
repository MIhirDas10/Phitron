#include<stdio.h>
void fun(int i)
{
    // base case
    if(i==0) return;
    printf("%d\n",i);
    fun(i-1);
}
int main()
{
    fun(5);
    return 0;
}


//------ call stack -------
// fun(0)  ➡️ -- ⤵️
// fun(1)  ⬆️ -- ⬇️
// fun(2)  ⬆️ -- ⬇️
// fun(3)  ⬆️ -- ⬇️
// fun(4)  ⬆️ -- ⬇️
// fun(5)  ⬆️ -- ⬇️
// main()
// -----------------------