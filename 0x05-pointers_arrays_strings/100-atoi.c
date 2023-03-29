#include <stdio.h>
#include <string.h>
#include <limits.h> // needed for INT_MAX and INT_MIN

/**
 * convert - convert number into nint
 * @c: recive
 * Return: the number
 */
int convert(char *c)
{
    int i = 0, sign = 0, l, r = 0;

    l = strlen(c);
    for (i = 0; i < l; i++)
    {
	if (c[i] >= '0' && c[i] <= '9')
	{
	    // check for integer overflow
	       if (r > INT_MAX / 10 || (r == INT_MAX / 10 && c[i] - '0' > INT_MAX % 10))
			return INT_MAX;
	    	r = r * 10 + (c[i] - '0');
	    	sign = 1;
	}
	else if (sign)
	    break;
    }
    return (r);
}

/**
 * _atoi - transform swtring to int
 * @s: recive
 * Return: sign int
 */
int _atoi(char *s)
{
    int k, sign = 1, l, i = 0;

    l = strlen(s);
    k = convert(s);
    while ((s[i] < '0' || s[i] > '9') && i < l)
    {
	if (s[i] == '-')
	    sign *= -1;
	if (s[i] >= '0' && s[i] <= '9')
	    break;
	i++;
    }

    // check for integer overflow when multiplying by sign
    if (sign == -1 && k == INT_MAX)
	return INT_MIN;
    return (sign * k);
}
