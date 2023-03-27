#include <string.h>
#include <main.h>
/**
 * _strlen - calculate
 * @s: recive number
 * Return: the length
*/
void _puts(char *str)
{
        int x = 0;
	x = strlen(str);
        for (int i = 0; i < x; i++)
        {
                _putchar(str[i]);
        }
        
}