#include <stdio.h>

int main()
{
    int start = 99;
    int end = 51;

    int y[17];
    int x = 0;

    for (int i = start; i >= end; i -= 3)
    {
        y[x] = i;
        x++;
    }

    printf("Numbers divisible by 3 from 100 to 50:\n");
    for (int i = 0; i < x; i++)
    {
        printf("%d", y[i]);
        if (i < x - 1)
        {
            printf(", ");
        }
    }
    printf("\n");
}

