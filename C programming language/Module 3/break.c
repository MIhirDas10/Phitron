#include <stdio.h>
int main()
{
    int i;
    for(i=1;i<=10;i++)   
    {
        // prints till 4 because printing while chekcking the condition
        if(i==5)
        {
            break;
        }
        printf("%d\n",i);

        // prints till 5 because already printed then checked the condition
        // printf("%d\n",i);
        // if(i==5)
        // {
        //     break;
        // }

    }
    return 0;
}