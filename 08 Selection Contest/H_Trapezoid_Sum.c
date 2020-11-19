#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long int
int main()

{

    ll N, A, B;
    ll sum = 0;

    scanf("%ld", &N);

    for (ll i = 0; i < N; i++)
    {

        scanf("%ld %ld", &A, &B);
        sum += (ll)(B * (B + 1) / 2) - (ll)(A * (A - 1) / 2);
    }

    printf("%ld", sum);
}