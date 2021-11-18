#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("\t1\n\nprint the string: ");
    char str[1000];
    scanf(" %s", &str);
    int i = 0;
    int cDigit = 0, cLetter = 0;

    while(str[i] != '\0')
    {
        if((str[i] >= 65 && str[i] <=90) || (str[i] >= 97 && str[i] <= 122))
            cLetter++;
        if(str[i] >= 48 && str[i] <= 57)
            cDigit++;
            i++;
    }
    printf("\n num of digits - %d, num of letters - %d\n\n\t2\n\n ", cDigit, cLetter);

    // второе задание

    printf("\t1\n\nprint time, abnonent_price, uplimit_price: ");
    int time, abnonent_price, uplimit_price;
    scanf(" %d", &time);
    scanf(" %d", &abnonent_price);
    scanf(" %d", &uplimit_price);
    if (abnonent_price / 499 <  uplimit_price)
    {
        printf("BAD");
        return 0;
    }
    if(time > 499)
    {
        int dopProce = (time - 499) * uplimit_price;
        int price = dopProce + abnonent_price;
        ("please pay - %d", price);
    }
    return 0;
}
