/**
 * check_sqrt - checks for the square root of a number using recursion
 * @n: the number to find the square root of
 * @i: the iterator to try as a candidate
 *
 * Return: the natural square root of the number or -1 if it doesn't exist
 */
int check_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	else
		return (check_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 *
 * Return: the natural square root of the number or -1 if it doesn't exist
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (check_sqrt(n, 0));
}
