#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * @argc: The number of arguments supllied to the program.
 * @argv: An array of pointers to the arguments.
 * Return: if the atgument is not one -1 othereise -0.
 */
int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}
	printf("%d\n", coins);

	return (0);
}
