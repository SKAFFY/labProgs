#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[4] = {'a', 'b', 'c', 'd'};
    //printf("%c\n", arr[0]);
    //printf("%c\n", *arr);
    for(int i = 0; i < 4; i++)
    {
        char tmp = (arr + i*sizeof(char));
        //printf("\n %d \n", tmp);
        printf("%c ", *(arr + i));
    }
    printf("\n");
    char *aray = (char *)malloc(4*sizeof(char));

    for(int i = 0; i<4; i++)
    {
        aray[i] = arr[i];
        printf("%c ", *(aray+i));
    }
    //int sz = sizeof(aray);
    //printf("\nsize of 1 arr %d\n", sz);
    printf("\n");
    aray = (char *)realloc(aray, 5*sizeof(char));
    aray[5] = 'c';
    for(int i = 0; i < 5; i++)
    {
        printf("%c ", aray[i]);
    }
    //int sz2 = sizeof(aray);
    //printf("size of 2 arr %d\n", sz2);
    free(aray);
    return 0;
}
