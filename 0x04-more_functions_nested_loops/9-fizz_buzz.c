#include <stdio.h>

/**
  *main - print 1 to 100,
  *multiples of 3 with Fizz,
  *multiples of 5 with Buzz
  *and multiple both 3 nad 5 with FizzBuzz
  *Return: 0 on success
  */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%i", i);

		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
