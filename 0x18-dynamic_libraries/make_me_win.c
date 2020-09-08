#include <unistd.h>
/**
 * rand - return a number
 * Return: number
 */
int rand(void)
{
	static int i = -1;

	i++;
	if (i == 0)
		return (8); /* Bonus number */
	if (i == 1)
		return (8); /* first number */
	if (i == 2)
		return (7); /* Second number */
	if (i == 3)
		return (9); /* Third number */
	if (i == 4)
		return (23); /* Fourth number */
	if (i == 5)
		return (74); /* Sixth number */
	return (0);
}
