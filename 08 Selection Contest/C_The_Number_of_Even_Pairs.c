#include <stdio.h>
#include <stdlib.h>
#include<string.h>


int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    N = (N * (N - 1)) / 2;
    M = (M * (M - 1)) / 2;
    printf("%d\n", N + M);
    return 0;
}