#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int capacity = 20;
    char *str = (char *)malloc(capacity * sizeof(char));

    if (str == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter a string (maximum 19 characters): ");
    scanf(" %19[^\n]", str);

    printf("You entered: %s\n", str);

    free(str);
    str = NULL;

    return 0;
}
