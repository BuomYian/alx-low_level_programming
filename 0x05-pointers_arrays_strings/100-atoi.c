#include "main.h"
#include "2-strlen.c"

/**
  *idx_num_starts - find index where a digit is first found in string
  *@s: string to search
  *Return: integer index where digit is first found
  */
int idx_num_starts(char *s)
{
	int i;

	for (i = 0; i < _strlen(s); i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			return (i);
	}
	return(-1);
}

/**
  *find_sign - determine if integer is negative
  *@s: integer
  *Return: integer 1 or -1
  */
int find_sign(char *s)
{
	int negatives = 0, i = 0, sign = 1;

	while (i < (idx_num_starts(s)))
	{
		if (s[i++] == '-')
			negatives++;
	}
	if (negatives % 2 != 0)
		sign = -1;

	return (sign);
}
/**
  *_atoi - converts string to integer
  *@s: string to convert
  *
  *Return: returns integer value
  */
int _atoi(char *s)
{
	int idx_digit_starts = (idx_num_starts(s));
	int sign;
	int digits_to_print = 0;
	int t = 1, i;
	unsigned int num = 0;
	int digit = (idx_num_starts(s));

	if (idx_digit_starts < 0)
		return (0);

	sign = find_sign(s);

	while ((s[idx_digit_starts] >= '0' && s[idx_digit_starts] <= '9') && (idx_digit_starts <= _strlen(s)))
	{
		digits_to_print += 1;
		idx_digit_starts++;
	}

	i = 1;
	while (i < digits_to_print)
	{
		t *= 10;
		i++;
	}

	for (i = digit; i < (digit + digits_to_print); i++)
	{
		num += (s[i] - '0') * t;
		t /= 10;
	}

	return (num * sign);
}
