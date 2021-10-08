#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1;
    printf("print x number\n");
    scanf("%x", &num1);
    printf("\n2. your number in dem system - %d", num1);
    int res1 = num1>>1;
    printf("\n3. your number in octal system - %o \n4. your number in octal sys + 1 - %o \n", num1, res1);
    int num2;
    scanf("%o", &num2);
    int res2 = num2 | num1;
    printf("\n5. result %o", res2);
    return 0;
}
