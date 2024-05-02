// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     int n;
//     scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         int digit=0,upper=0,lower=0;
//         // for(int t=0;t<n;t++)
//         // {
//         char a[100001];
//         fgets(a,sizeof(a),stdin);
//             for(int i=0;i<strlen(a);i++)
//             {
//                 char ch=a[i];
//                 int ascii=ch;
//                 if(ascii>=48 && ascii<=64){
//                     digit++;
//                 }
//                 else if(ascii>=65 && ascii<=90){
//                     upper++;
//                 }
//                 else if(ascii>=97 && ascii<=122){
//                     lower++;
//                 }
//             }
//         // }
//         printf("%d %d %d\n",upper,lower,digit);
//     }
//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int digit = 0, upper = 0, lower = 0;
        char a[10001];
        scanf("%s", a); 
        
        for (int j = 0; j < strlen(a); j++) {
            char ch=a[j];
            int ascii=ch;
            if(ascii>=48 && ascii<=64){
                digit++;
            }
            else if(ascii>=65 && ascii<=90){
                upper++;
            }
            else if(ascii>=97 && ascii<=122){
                lower++;
            }
        }
        printf("%d %d %d\n", upper, lower, digit);
    }
    return 0;
}
