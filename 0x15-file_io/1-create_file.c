#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: NULL terminated string to write to file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int flags, file;
	mode_t file_perm;
	ssize_t num_out;

	if (filename == NULL)
		return (-1);

	flags = O_CREAT | O_WRONLY | O_TRUNC;
	file_perm = S_IRUSR | S_IWUSR;
	file = open(filename, flags, file_perm);

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
	else
	{
		num_out = write(file, "", 0);
	}
	close(file);
	return (1);
}
