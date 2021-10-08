#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    const float pi = 3.14;
    float arg;
    scanf("%f", &arg);
    float answer1 = 2 * pow((sin(3 * pi - 2 * arg) * cos(5 * pi + 2 * arg)),2);
    printf("z1 = %f\n", answer1);
    float answer2 = 0.25 - 0.25 * sin(2.5 * pi - 8 * arg);
    printf("z2 = %f", answer2);
    return 0;
}
