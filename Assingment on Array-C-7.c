#include<stdio.h>

int main() {
    int r1, c1, r2, c2;
    printf("Input the rows and columns of the first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Input the rows and columns of the second matrix: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("Sorry, the operation can't be done! Number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
        return 0;
    }

    int mat1[r1][c1], mat2[r2][c2], ans[r1][c2];

    printf("Input elements in the first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Input elements in the second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

  
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            ans[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                ans[i][j] += (mat1[i][k] * mat2[k][j]);
            }
        }
    }

    printf("The first matrix is:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }

    printf("The second matrix is:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }

    printf("The multiplication of two matrices is:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", ans[i][j]);
        }
        printf("\n");
    }

    return 0;
}
