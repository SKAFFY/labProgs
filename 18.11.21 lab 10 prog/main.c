#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    printf("\n \t1\n\nprint numbers ");
    int a,b, i, j;
    scanf(" %d", &i);
    scanf(" %d", &j);
    a = i;
    b = j;
    while(a != b)
    {
        if (a < b)
            b -=a;
        else
            a-=b;
    }

    printf("NOD - %d\n", a);
    int NOD = j*i/a;
    printf("NOK - %d\n", NOD);

    printf("\n \t2\n\nprint number of points ");
    int n;
    scanf(" %d", &n);
    int * arr = (int*)malloc( n*(n-1) * sizeof(int));

    int* dotX = (int*)malloc(n * sizeof(int));
    int* dotY = (int*)malloc(n * sizeof(int));
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        scanf(" %d", &dotX[i]);
        scanf(" %d", &dotY[i]);
    }
    for (int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
        {
            if(i == j)
                continue;
            else
            {
                arr[c] = sqrt(pow(abs(dotX[i] - dotX[j]), 2) + pow(abs(dotY[i] - dotY[j]), 2));
                printf("%d\n", arr[c]);
                c++;
            }
        }
    return 0;
}
