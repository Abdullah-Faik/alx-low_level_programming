#include <stdio.h>
#include "main.h"
void print_alphabet(void);
/**
 * main - print word
 *
 * Return: 0
*/
int main(void)
{
	print_alphabet();

        return (0);
}
void print_alphabet(void)
{
        char x = 'a';
        while (x <= 'z')
        {
                _putchar(x);
        }

}