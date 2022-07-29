#include <stdio.h>
/**
 * main - main function
 * @argc: argumentc
 * @argv: vector of arguments
 *Return: always 0
 */
int main(int argc, char  *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
