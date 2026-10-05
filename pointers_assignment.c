#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int get_string_length(const char *ptr) {
    const char *start = ptr;
    while (*ptr != '\0') {
        ptr++;
    }
    return (int)(ptr - start);
}

int main() {
    printf("=== ASSIGNMENT 1: Basics of Pointers ===\n");
    int num = 42;
    int *ptr_num = &num;

    printf("Address of 'num' directly: %p\n", (void*)&num);
    printf("Address stored in 'ptr_num': %p\n", (void*)ptr_num);

    printf("Original value of 'num': %d\n", num);
    *ptr_num = 99;
    printf("Modified value of 'num' via pointer: %d\n\n", num);


    printf("=== ASSIGNMENT 2: Pointer Arithmetic ===\n");
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr_arr = arr;

    printf("Traversing array using pointer:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d (Address: %p): %d\n", i, (void*)(ptr_arr + i), *(ptr_arr + i));
    }

    for (int i = 0; i < 5; i++) {
        *(ptr_arr + i) += 5;
    }

    printf("\nModified array printed using pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr_arr + i));
    }
    printf("\nModified array printed using array indexing:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");


    printf("=== ASSIGNMENT 3: Pointers and Functions ===\n");
    int x = 15, y = 85;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap:  x = %d, y = %d\n\n", x, y);


    printf("=== ASSIGNMENT 4: Pointers to Pointers ===\n");
    int val = 250;
    int *ptr_val = &val;
    int **dbl_ptr = &ptr_val;

    printf("Value of 'val' directly: %d\n", val);
    printf("Value using single pointer (*ptr_val): %d\n", *ptr_val);
    printf("Value using double pointer (**dbl_ptr): %d\n\n", **dbl_ptr);


    printf("=== ASSIGNMENT 5: Strings and Character Pointers ===\n");
    char str[] = "Hello";
    char *char_ptr = str;

    printf("Printing string character by character using pointer: ");
    while (*char_ptr != '\0') {
        printf("%c", *char_ptr);
        char_ptr++;
    }
    printf("\n");

    char_ptr = str;
    int length = get_string_length(char_ptr);
    printf("Calculated string length using pointer arithmetic: %d\n", length);

    return 0;
}
