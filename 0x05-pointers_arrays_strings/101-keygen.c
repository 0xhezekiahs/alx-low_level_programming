#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - generate password id randomly
 *Return: 0
 */
int main(void)
{
	int pw, sum;

	srand(time(NULL));
	sum = 0;
	while (sum <= 2645)
	{
		pw = (rand() % 128);
		sum += pw;
		printf("%c", pw);
	}
	printf("%c", 2772 - sum);
	return (0);
}
