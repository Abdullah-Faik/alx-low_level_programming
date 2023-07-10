#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t i = 0;
	int o;
	FILE *file;
	char *text;

	o = open(filename, O_RDONLY);
	if (!filename || o == -1)
		return 0;

	file = fdopen(o, "r");
	if (file == NULL)
		return 0;

	text = (char *)malloc(letters + 1);
	if (text == NULL)
	{
		fclose(file);
		return 0;
	}

	i = fread(text, sizeof(char), letters, file);

	if (i != (ssize_t)letters)
	{
		free(text);
		fclose(file);
		return 0;
	}

	write(1, text, i);

	free(text);
	fclose(file);
	
	return i;
}
