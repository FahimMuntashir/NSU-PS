#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int T;
    scanf("%d", &T);
    int len, count = 1;
    int flag = 0;
    while (T--)
    {
        int n;
        count = 1;
        flag = 0;
        scanf("%d", &n);
        while (n--)
        {
            scanf("%d", &len);
            flag += len / count;
            count++;
        }
        if (flag % 2 == 0)
            printf("BOB\n");
        else
            printf("ALICE\n");
    }
    return 0;
}
