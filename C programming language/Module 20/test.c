#include <stdio.h>
#include <stdlib.h>

int main() {
    int testcase;
    scanf("%d", &testcase);
    
    while (testcase--) {
        int n;
        scanf("%d", &n);
        
        int a[n], b[n], c[n];
        
        // Reading array A
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        
        // Creating a copy of array A named B
        for (int i = 0; i < n; i++) {
            b[i] = a[i];
        }
        
        // Sorting array B in ascending order
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (b[j] > b[j + 1]) {
                    int temp = b[j];
                    b[j] = b[j + 1];
                    b[j + 1] = temp;
                }
            }
        }
        
        // Calculating the absolute difference between corresponding elements of A and B to form array C
        for (int i = 0; i < n; i++) {
            c[i] = abs(a[i] - b[i]);
        }
        
        // Outputting array C
        for (int i = 0; i < n; i++) {
            printf("%d ", c[i]);
        }
        printf("\n");
    }
    
    return 0;
}
