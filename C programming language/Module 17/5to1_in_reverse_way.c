#include<stdio.h>
void fun(int i)
{
    // base case
    if(i==6) return; // now 5 to 1
    fun(i+1);        // infinity to 1
    printf("%d\n",i);
}
// ❗
// if recursion is called before print
// "(or any main work)", then it will 
// work in the revese way...(this example)
int main()
{
    fun(1);
    return 0;
}


//--------- call stack ----------
// fun(6)  ➡️ -- ⤵️
// fun(5)  ⬆️ -- ⬇️ -- print(5)
// fun(4)  ⬆️ -- ⬇️ -- print(4)
// fun(3)  ⬆️ -- ⬇️ -- print(3)
// fun(2)  ⬆️ -- ⬇️ -- print(2)
// fun(1)  ⬆️ -- ⬇️ -- print(1)
// main()
// ------------------------------