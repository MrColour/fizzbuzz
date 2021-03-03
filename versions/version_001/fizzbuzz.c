/***************************************************************************
 * FILENAME:    fizzbuzz.c
 * DESCRIPTION: version_001
 *
 * ENVIRONMENT:
 *     macOS Cataline 10.15.7
 *     Visual Studio Code 1.30
 * AUTHORS:
 *     Kevin Colour
 * DATES:
 *     Created: 02Mar2021
***************************************************************************/

#include <stdio.h>

void	fizzbuzz_001(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0)
			printf("Fizz");
		if (i % 5 == 0)
			printf("Buzz");
		if (i % 3 != 0 && i % 5 != 0)
			printf("%d", i);
		printf("\n");
		i++;
	}
}