#include <cs50.h>
#include <stdio.h>

int main()
{
    float number;
    int count = 0;
    float sum = 0;

    printf("Enter numbers (enter -1 to stop):\n");

    while (true)
    {
        number = get_int("number: ");

        if (number == -1)
        {
            break;
        }

        sum += number;
        count++;
    }

    if (count > 0)
    {
        float average = sum / count;
        printf("You entered %d numbers.\n", count);
        printf("Sum: %f\n", sum);
        printf("Average: %.2f\n", average);
    }
    else
    {
        printf("No numbers were entered.\n");
    }
}

