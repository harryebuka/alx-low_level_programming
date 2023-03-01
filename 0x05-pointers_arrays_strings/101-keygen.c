#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

/**
 * main - Entry point for the program
 *
 * Return: 0 on success, non-zero on failure
 */
int main(void)
{
	srand(time(NULL));
	
	char password[PASSWORD_LENGTH + 1];
	for (int i = 0; i < PASSWORD_LENGTH; i++)
	{
		int random_char = rand() % 94 + 33;
		password[i] = (char)random_char;
	}
	
	password[PASSWORD_LENGTH] = '\0';
	printf("Random password: %s\n", password);
	
	return (0);
}
