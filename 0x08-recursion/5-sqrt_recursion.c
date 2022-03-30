int _find_sqrt(int p, int f);
/**
 * _sqrt_recursion - finds square root of number
 * @n: number
 * Return: the result
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (_find_sqrt(1, n));
}
/**
 * _find_sqrt - finds square root
 * @p: previous result
 * @f: a constant
 * Return: the result
 */
int _find_sqrt(int p, int f)
{
	if (p > f)
		return (-1);
	if (p * p == f)
		return (p);
	return (_find_sqrt(p + 1, f));
}
