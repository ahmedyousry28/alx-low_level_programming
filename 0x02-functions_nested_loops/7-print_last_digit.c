/**
 * print_last_digit - print lass entered value
 *
 * @n: entered number
 *
 * Return: last digit of number
 *
 */
int print_last_digit(int n)
{
	int result;

	result = n % 10;
	if (result < 0)
		result *= -1;
	-putchar(result, '0');
	return (result);
}
