/**
 * leet - Converts a string to "leet" (1337) language.
 * @s: Pointer to the string to convert.
 *
 * Return: Pointer to the converted string.
*/
char *leet(char *s)
{
	char a[] = {'a', 'e', 'o', 't', 'l'};
	char b[] = {'4', '3', '0', '7', '1'};
	int j = 0;

	while (s[j] != '\0')
	{
		int i;

		for (i = 0; i < 5; i++)
		{
			if (s[j] == a[i] || s[j] == a[i] - 32)
				s[j] = b[i];
		}
		j++;
	}
	return (s);

}
