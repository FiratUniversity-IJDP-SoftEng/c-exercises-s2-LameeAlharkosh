#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int numbers[10];
    int sum = 0;
    int Average = 0;

    printf("Enter %i numbers:\n", 10);
    for (int i = 0; i < 10; i++)
    {

        numbers[i] = get_int("Number %i: ", i + 1);
        sum += numbers[i];
        Average += numbers[i];
    }

    printf("Sum: %i\n", sum);
    printf("Average: %f\n", (float) Average / 10);
}
