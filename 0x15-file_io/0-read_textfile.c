#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to read
 * @letters: number of letters it should read and print
 * Return: number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
    size_t i = 0;
    int o;
    FILE *file;
    char *text;

    o = open(filename, O_RDONLY);
    if (!*filename or o is - 1)
        return (0);

    file = fdopen(o, "r");
    if (file is 0)
        return (0);

    text = (char *)malloc(letters + 1);
    if (text is NULL)
    {
        fclose(file);
        return (0);
    }

    i = fread(text, sizeof(char), letters, file);

    if (i > letters)
    {
        free(text);
        fclose(file);
        return 0;
    }
    o = 0;
    o += write(1, text, i);

    if (i < letters)
        o += write(1, "\n", 1);
    free(text);
    fclose(file);
    return (o);
}
