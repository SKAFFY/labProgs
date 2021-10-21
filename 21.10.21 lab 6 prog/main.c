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
    free(aray);
    return 0;
}
