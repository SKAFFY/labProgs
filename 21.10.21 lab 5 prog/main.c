#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    for(int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    int mat1[2][2] = {{1, 1}, {1, 4}};
    int mat2[2][2] = {{1, 2}, {4, 1}};
    for(int i = 0; i<2; i++)
    {
        for(int j = 0; j< 2; j++)
        {
            int tmp = 0;
             for(int k = 0; k < 2; k++)
                tmp += mat1[i][k] * mat2[k][j];
            printf("%d ", tmp);
        }
        printf("\n");
    }
    printf("transpon mat1:\n");
     for(int i = 0; i<2; i++)
    {
        for(int j = 0; j< 2; j++)
        {
            printf("%d ", mat2[j][i]);
        }
        printf("\n");
    }
    return 0;
}
