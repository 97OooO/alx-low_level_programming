#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
        srand(time(NULL)); 

        int n = rand() % 201 - 100;

        printf("%d\n", n);

        if (n > 0)
                printf("%d is positive\n",n);
        else if (n == 0)
                printf("%d is zero\n",n);
        else
                printf("%d is negative\n",n);

        return (0);
}

