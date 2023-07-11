#include "main.h"
/**
 * append_text_to_file - appends text to a file
 * @filename: name of file
 * @text_content: NULL terminated string to add to end of file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int flags, file;
	ssize_t num_out;
	mode_t perm;

	flags = O_APPEND | O_WRONLY;
	perm = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);
	file = open(filename, flags, perm);

	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		num_out = write(file, text_content, strlen(text_content));
		if ((int)num_out != (int)strlen(text_content))
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}
