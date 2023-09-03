#include<stdio.h>
int main()
{
    printf("Input the size of the square matrix (less than 5): \n");
    int sz; scanf("%d",&sz);
    int mat1[sz][sz],mat2[sz][sz],ans[sz][sz];

    printf("Input elements in the first matrix : \n");
    for(int i = 0;i<sz;i++)
    {
        for(int j = 0;j<sz;j++)
        {
            printf("Element- [%d][%d] : ",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }

    printf("Input elements in the second matrix : \n");
    for(int i = 0;i<sz;i++)
    {
        for(int j = 0;j<sz;j++)
        {
            printf("Element- [%d][%d] : ",i,j);
            scanf("%d",&mat2[i][j]);
        }
    }

     for(int i = 0;i<sz;i++)
    {
        for(int j = 0;j<sz;j++)
        {
           ans[i][j]= mat1[i][j]-mat2[i][j];
        }
    }

     printf("The first matrix is : \n");
    for(int i = 0;i<sz;i++)
    {
        for(int j = 0;j<sz;j++)
        {
            printf("%d ",mat1[i][j]);
        }
        printf("\n");
    }

       printf("The second matrix is : \n");
    for(int i = 0;i<sz;i++)
    {
        for(int j = 0;j<sz;j++)
        {
            printf("%d ",mat2[i][j]);
        }
        printf("\n");
    }

       printf("The Subtraction of two matrix is  : \n");
    for(int i = 0;i<sz;i++)
    {
        for(int j = 0;j<sz;j++)
        {
            printf("%d ",ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}