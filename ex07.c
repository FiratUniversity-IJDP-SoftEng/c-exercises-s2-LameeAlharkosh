#include <stdio.h>
int main()
{

    for (int i = 1; i <= 11; i++)
    {

        int column1 = i * 5;
        int column2 = 100 - ((i - 1) * 10 + 1);
        int column3 = i;
        printf("%3d  %3d  %3d\n", column1, column2, column3);
    }
}

