#include <stdio.h>
#include <stdlib.h>
#include <math.h>

enum week {pon = 1, wt = 2, sred = 3, chet = 4, pyat = 5, subb = 6, voskr = 7};

struct coordinates
{
    int x;
    int y;
};

struct circle
{
    struct coordinates c_circle;
    int radius;
};

double Sq(struct circle obj)
{
    return M_PI*pow(obj.radius,2);
}

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
    enum week first;
    int dayNum = pon;
    printf("monday is %d day of week \n\n", dayNum);
    struct circle bublik;
    bublik.c_circle.x = 1;
    bublik.c_circle.y = 1;
    bublik.radius = 5;
    //double S = M_PI * pow(bublik.radius, 2);
    printf("square of circle = %f\n\n", Sq(bublik));
    union player explay;
    int sost;
    scanf("%x", &sost);
    explay.write = sost;
    printf("\nplay %d", explay.condit.play);
    printf("\nrec %d", explay.condit.rec);
    printf("\npause %d", explay.condit.pause);
    return 0;
}
