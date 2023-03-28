#include <stdlib.h>
#include <string.h>
/**
 * _atoi - transform swtring to int
 * @s: recive
 * Return: sign int
*/
int _atoi(char *s)
{
	int k, sign = 1, l, i;

	l = strlen(s);
	k = atoi(s);
	for (i = 0; i < l; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
			break;
	}
	return (sign * k);

}
