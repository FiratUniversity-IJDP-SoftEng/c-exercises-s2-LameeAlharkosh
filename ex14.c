#include <stdio.h>

int main()
{
    int sum = 0;

    for (int i = 0; i < 11; i++)
    {
        sum += i;
        printf(" %i", sum);
    }
    printf("\n");
}

