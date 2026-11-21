#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int rows = 2, columns = 3;
    int i, j;
    int **matrix = (int **)malloc(rows * sizeof(int *));

    if (matrix == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(columns * sizeof(int));
        if (matrix[i] == NULL) {
            printf("Memory allocation failed.\n");
            while (i > 0) {
                free(matrix[--i]);
            }
            free(matrix);
            return 1;
        }
    }

    printf("Enter %d integers for a %d x %d array:\n",
           rows * columns, rows, columns);

    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nThe 2D array is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
