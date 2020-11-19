#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define ll long int
#define ld long double

int main()
{

    ld A, B, H, M, ans;
    ld rad1, rad2, rad3;

    scanf("%lf%lf%lf%lf", &A, &B, &H, &M);

    rad1 = (H / 12 + M / 12 / 60) * 2 * M_PI;
    rad2 = M / 60 * 2 * M_PI;
    rad3 = rad2 - rad1;

    ans = sqrt(A * A + B * B - 2 * A * B * cos(rad3));

    printf("%.20lf\n", ans);

    return 0;
}