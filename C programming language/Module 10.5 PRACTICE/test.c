#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int A[N];
    for (int i = 0; i < N; i++)
        scanf("%d", &A[i]);

    int min_index = 0, max_index = 0;
    for (int i = 1; i < N; i++) {
        if (A[i] < A[min_index])
            min_index = i;
            printf("\n%d\n",min_index);
        if (A[i] > A[max_index])
            max_index = i;
            printf("\n%d\n]]b",max_index);
    }
    
    // Swap minimum number with maximum number
    int temp = A[min_index];
    A[min_index] = A[max_index];
    A[max_index] = temp;

    // Print the modified array
    for (int i = 0; i < N; i++)
        printf("%d ", A[i]);
    
    return 0;
}
