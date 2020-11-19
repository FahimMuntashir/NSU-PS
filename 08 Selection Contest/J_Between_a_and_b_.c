#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long int

int main()
{
    ll a, b, x;
    scanf("%ld %ld %ld", &a, &b, &x);
    ll ans = (b + x) / x - (a + x - 1) / x;
    printf("%ld\n", ans);
}