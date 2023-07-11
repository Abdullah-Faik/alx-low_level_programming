#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
 * copy_file_help - copies the content of a file to another file
 * @fd: file descriptor
 * @file_from: file to copy from
 * @file_to: file to copy to
 * @fd2: file descriptor
 * @rd: read
 * @buffer: buffer
 */

void copy_file_help(int fd, char *file_from, char *file_to,
int fd2, int rd, char *buffer)
{
	int wr;

	while (rd > 0)
	{
		wr = write(fd2, buffer, rd);
		if (wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
		rd = read(fd, buffer, 1024);
		if (rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
		}
	}
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
}

/**
 * copy_file - copies the content of a file to another file
 * @file_from: file to copy from
 * @file_to: file to copy to
 */
void copy_file(char *file_from, char *file_to)
{
	int fd, fd2, rd;
	char buffer[1024];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	fd = open(file_from, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd2 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	rd = read(fd, buffer, 1024);
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	copy_file_help(fd, file_from, file_to, fd2, rd, buffer);
}

/**
 * main - copies the content of a file to another file
 * @args: number of arguments
 * @argv: arguments
 * Return: 0
 */
int main(int args, char *argv[])
{

	if (args != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_file(argv[1], argv[2]);
	return (0);
}
