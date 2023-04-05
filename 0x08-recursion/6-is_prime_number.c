/**
 * check_divisibility - checks if a number is divisible by any number between 2 and sqrt(n)
 * @n: the number to check
 * @i: the divisor to check
 *
 * Return: 1 if n is divisible by i, otherwise 0
 */
int check_divisibility(int n, int i)
{
    if (i * i > n) /* base case, we have checked all possible factors */
        return (0);
    else if (n % i == 0) /* n is divisible by i */
        return (1);
    else /* check the next divisor */
        return (check_divisibility(n, i + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime_number(int n)
{
    if (n <= 1) /* 1 is not prime */
        return (0);
    else if (n == 2) /* 2 is prime */
        return (1);
    else /* check if n is divisible by any integer between 2 and sqrt(n) */
        return (!check_divisibility(n, 2));
}
