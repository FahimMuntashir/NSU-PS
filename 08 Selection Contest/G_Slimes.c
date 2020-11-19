#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long int

int main()
{
    ll n;
    char ch[1000];
    int sum = 0;
    scanf("%ld", &n);
    getchar();
    for (int i = 0; i < n; i++)
        scanf("%c", &ch[i]);
    for (int i = 1; i < n; i++)
    {
        if (ch[i] != ch[i - 1])
        {
            sum++;
        }
    }
    printf("%d\n", sum + 1);
}
