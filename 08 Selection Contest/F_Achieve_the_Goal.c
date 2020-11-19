#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long int

int main()
{
    ll N, K, M;
    ll res;
    ll count = 0;

    scanf("%ld %ld %ld", &N, &K, &M);
    for (ll i = 0; i < N - 1; i++)
    {
        ll A;
        scanf("%ld", &A);
        count += A;
    }
    res = M * N - count;
    if (res < 0)
        res = 0;
    if (res > K)
        res = -1;
    printf("%ld", res);
}