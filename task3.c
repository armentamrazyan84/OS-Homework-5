#include <stdio.h>
#include <stdlib.h>

int main() {
    // Allocate space for 10 integers
    int *arr = (int *)malloc(10 * sizeof(int));
    if (arr == NULL) return 1;

    printf("Enter 10 integers: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Shrink the array to hold only 5 integers
    int *temp = (int *)realloc(arr, 5 * sizeof(int));
    if (temp == NULL) {
        printf("Reallocation failed!\n");
        free(arr);
        return 1;
    }
    arr = temp;

    // Print the first 5 values
    printf("Array after resizing:");
    for (int i = 0; i < 5; i++) {
        printf(" %d", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}
