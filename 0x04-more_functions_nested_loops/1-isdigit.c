/**
 * _isdigit - check if c is a integer between 0 - 9
 *
 * @c: input for integer
 *
 * Return: 1 if its integer, 0 if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
