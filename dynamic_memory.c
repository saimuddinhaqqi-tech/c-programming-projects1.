#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n = 5;
    int i, sum = 0;
    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum using malloc: %d\n", sum);

    free(arr);
    arr = NULL;

    /* calloc allocates memory and initializes it to zero. */
    arr = (int *)calloc(n, sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    sum = 0;
    printf("\nThe %d values allocated using calloc are:\n", n);
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        sum += arr[i];
    }

    printf("\nSum of the initial calloc values: %d\n", sum);

    free(arr);
    arr = NULL;

    return 0;
}
