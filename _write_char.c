#include "main.h"

/**
 * _write_char - prints out character "c"
 * @c: the character variable
 * Return: 1 for success and -1 otherwise
 */

int _write_char(char c)
{
	return (write(1, &c, 1));
}
