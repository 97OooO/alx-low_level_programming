#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	srand(time(NULL));

	char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	char password[PASSWORD_LENGTH + 1];

	for (int i = 0; i < PASSWORD_LENGTH; i++)
	{
		int index = rand() % (sizeof(charset) - 1);
		password[i] = charset[index];
	}

	password[PASSWORD_LENGTH] = '\0';

	printf("Random password: %s\n", password);

	return (0);
}
