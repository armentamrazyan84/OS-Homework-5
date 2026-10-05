#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, sum = 0;

    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 1;

    // Dynamically allocate memory for n integers
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d integers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum of the array: %d\n", sum);

    // Always free dynamically allocated memory
    free(arr);
    return 0;
}
