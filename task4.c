#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Allocate space for 3 string pointers
    char **strings = (char **)malloc(3 * sizeof(char *));
    for (int i = 0; i < 3; i++) {
        strings[i] = (char *)malloc(50 * sizeof(char));
    }

    printf("Enter 3 strings: ");
    for (int i = 0; i < 3; i++) {
        scanf("%s", strings[i]);
    }

    // Resize array to hold 2 more strings (total 5)
    char **temp = (char **)realloc(strings, 5 * sizeof(char *));
    if (temp == NULL) return 1;
    strings = temp;

    // Allocate memory for the 2 new strings
    for (int i = 3; i < 5; i++) {
        strings[i] = (char *)malloc(50 * sizeof(char));
    }

    printf("Enter 2 more strings: ");
    for (int i = 3; i < 5; i++) {
        scanf("%s", strings[i]);
    }

    printf("All strings:");
    for (int i = 0; i < 5; i++) {
        printf(" %s", strings[i]);
    }
    printf("\n");

    // Free individual strings first, then the main pointer array
    for (int i = 0; i < 5; i++) {
        free(strings[i]);
    }
    free(strings);

    return 0;
}
