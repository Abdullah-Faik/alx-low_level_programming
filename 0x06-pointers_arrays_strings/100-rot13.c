
/**
 * rot13 - check the code
 * @s: recive
 * Return: s
 */
char *rot13(char *s)
{
	char c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char o[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j = 0;

	while (s[j] != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (s[j] == c[i])
			{
				s[j] = o[i];
				break;
			}
		}
		j++;
	}
	return (s);
}
