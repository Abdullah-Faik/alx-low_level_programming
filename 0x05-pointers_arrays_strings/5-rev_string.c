#include <string.h>
#include "main.h"
/**
  * rev_string - reverse strings
  * @s: resive strings
*/

void rev_string(char *s)
{
	int k = strlen(s);
	int i, j;

	i = 0;
	j = k - 1;
	for (; i < j; i++, j--)
	{
		char temp = s[i];

		s[i] = s[j];
		s[j] = temp;
	}

}
