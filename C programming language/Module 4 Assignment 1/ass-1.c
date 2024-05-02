// #include <stdio.h>
// int main()
// {
//     printf("Hello, world! I am learning C programming language. ^_^\nProgramming is fun and challenging. /\\/\\/\\\nI want to give my 100%% dedication to learn! \tI will succeed one day.");
//     return 0;
// }

// I want to give my 100% dedication to learn! 	I will succeed one day.
// I want to give my 100% dedication to learn!	I will succeed one day.

// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {

//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
//     long long int a,b;
//     scanf("%lld %lld",&a,&b);
//     long long int mul=a*b;
//     printf("%lld",mul);
//     return 0;
// }


// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {

//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
//     int a;
//     scanf("%d",&a);
//     if(a%3==0){
//         printf("Yes");
//     }
//     else{
//         printf("No");
//     }
//     return 0;
// }


// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {

//     /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
//     int i,a;
//     scanf("%d",&a);
//     for(i=1;i<=a;i++){
//         if(i%21==0){
//             printf("%d\n",i);
//         }
//     }
//     return 0;
// }



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int remaining,a;
    scanf("%d",&a);
    if(a>1000){
        printf("I will buy Punjabi\n");
        int remaining=a-1000;
        if(remaining>=500){
            printf("I will buy new shoes\nAlisa will buy new shoes");
        }
    }
    else{
        printf("Bad luck!");
    }
    return 0;
}
