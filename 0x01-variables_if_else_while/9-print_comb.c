#include <stdio.h>

/**
  *main - print 0-9 separated with commas, using putchar
  *
  *Return: Always returns 0 (Success)
  */
int main(void)
{
	int n = 'o';

	while (n <= '9')
	{
		putchar(n);
		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
