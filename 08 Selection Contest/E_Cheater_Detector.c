#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long int
int main()
{
    ll T;

    while (scanf("%ld", &T) == 1 && T != 0)
    {
        ll a, b, c;
        ll count;
        for (ll i = 1; i <= T; i++)
        {
            scanf("%ld%ld%ld", &a, &b, &c);
            count = 1;
            while (b != 0)
            {
                count = (count * a * (b & 1) + count * ((b & 1) == 0)) % c;
                a = (a * a) % c;
                b >>= 1;
            }
            printf("%ld\n", count);
        }
    }
    return 0;
}