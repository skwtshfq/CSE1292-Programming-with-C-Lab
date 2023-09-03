#include<stdio.h>
int main()
{
printf("Input rows and columns of the matrix : ");
int r,c;
scanf("%d %d",&r,&c);
int mat[r][c];
 printf("Input elements in the matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

        int ans[c][r];
     for(int i = 0;i<r;i++)
     {
        for(int j = 0;j<c;j++)
        {
            ans[j][i]= mat[i][j];
        }
     }
     printf("The matrix is :\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }

      printf("The transpose matrix is :\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d ",ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}