#include <stdio.h>


int main()
{
    int num;
    scanf("%d", &num);
    int left = 10, right = 100, rDiv, lDiv;
    rDiv = (num-1) / right;
    lDiv = num / left;
    printf(" if no \"yes\" then no : ");
    while (lDiv && !rDiv)
    {
        printf("yes\n"); break;
    }
    int num2;
    scanf("%d", &num2);

    int res = num2 & (1 << 21);
    printf("%d", res);
    return 0;
}
