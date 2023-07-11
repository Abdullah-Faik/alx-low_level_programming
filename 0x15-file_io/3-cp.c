#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
 * main - copies the content of a file to another file.
 * @args: number of arguments
 * @argv: arguments
*/

int main(int args , char *argv[])
{
	int input_file , output_file , flag_input , flag_output;
	char buf[1024];
	ssize_t read_bytes = 0 , write_bytes , readed ;
	mode_t  mode_output;

	flag_input = O_RDONLY;
	flag_output = O_WRONLY | O_CREAT | O_TRUNC;
	mode_output = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	

	if (args != 3)
	{
		dprintf(STDERR_FILENO , "Usage: cp file_from file_to\n");
		exit(97);
	}

	input_file = open(argv[1] , flag_input);
	if (input_file == -1)
	{
		dprintf(STDERR_FILENO , "Error: Can't read from file %s\n" , argv[1]);
		exit(98);
	}
	output_file = open(argv[2] , flag_output , mode_output);
	if (output_file == -1)
	{
		dprintf(STDERR_FILENO , "Error: Can't write to %s\n" , argv[2]);
		exit(99);
	}
	while ((readed = read(input_file , buf , 1024)) > 0)
	{
		write_bytes = write(output_file , buf , readed);
		if (write_bytes == -1)
		{
			dprintf(STDERR_FILENO , "Error: Can't write to %s\n" , argv[2]);
			exit(99);
		}
	}
	if (read_bytes == -1)
	{
		dprintf(STDERR_FILENO , "Error: Can't read from file %s\n" , argv[1]);
		exit(98);
	}
	if (read_bytes != write_bytes)
	{
		dprintf(STDERR_FILENO , "Error: Can't write to %s\n" , argv[2]);
		exit(99);
	}
	if (close(input_file) == -1)
	{
		dprintf(STDERR_FILENO , "Error: Can't close fd %d\n" , input_file);
		exit(100);
	}
	return (0);

}