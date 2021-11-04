#include <stdio.h>
#include <stdlib.h>
#include <math.h>



struct circle
{
    int x;
    int y; // координаты центра
    int radius;
};

struct systems
{
    unsigned play:1;
    unsigned pause:1;
    unsigned rec:1;
};

union player
{
    struct systems condit;
    int write;
};

int main()
{
    enum {pon = 1, wt = 2, sred = 3, chet = 4, pyat = 5, subb = 6, voskr = 7};
    int dayNum = pon;
    printf("ponedelnyik %d den nedely \n\n", dayNum);
    struct circle bublik;
    bublik.x = 1;
    bublik.y = 1;
    bublik.radius = 5;
    double S = M_PI * pow(bublik.radius, 2);
    printf("ploshad kruga radiusa 5 ravna %f\n\n", S);
    union player explay;
    int sost;
    scanf("%x", &sost);
    explay.write = sost;
    printf("\nplay %d", explay.condit.play);
    printf("\nrec %d", explay.condit.rec);
    printf("\npause %d", explay.condit.pause);
    return 0;
}
