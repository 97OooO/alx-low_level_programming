/*
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


*main - Determines if a number is positive, zero or negative.
*
*Return : always 0 (success)
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));  // do not touch this line

    int n = rand() % 201 - 100;  // do not touch this line

    printf("%d\n", n);
    
    if (n > 0) {
        printf("is positive\n");
    } else if (n == 0) {
        printf("is zero\n");
    } else {
        printf("is negative\n");
    }
    
    return 0;
}

/*
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
*/
