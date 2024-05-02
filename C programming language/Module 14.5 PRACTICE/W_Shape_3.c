#include <stdio.h>

int main() {
    int n, s, k;

    printf("Enter the number of rows for the diamond: ");
    scanf("%d", &n);

    // Upper half of the diamond
    s = n - 1; // Number of spaces before asterisks
    k = 1;     // Number of asterisks in each row (starts with 1)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < s; j++) { // Print spaces
            printf(" ");
        }
        for (int j = 0; j < k; j++) { // Print asterisks
            printf("*");
        }
        printf("\n");
        s--;      // Decrease spaces for next row
        k += 2;   // Increase asterisks for next row
    }

    // Lower half of the diamond
    s = 1;      // Number of spaces before asterisks (starts with 1 again)
    k = 2 * (n - 1) - 1; // Width of the middle layer (derived from upper half)
    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < s; j++) { // Print spaces
            printf(" ");
        }
        for (int j = 0; j < k; j++) { // Print asterisks
            printf("*");
        }
        printf("\n");
        s++;      // Increase spaces for next row
        k -= 2;   // Decrease asterisks for next row
    }

    return 0;
}
