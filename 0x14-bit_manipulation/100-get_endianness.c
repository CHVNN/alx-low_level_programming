#include "main.h"

/**
 * get_endianness - this is a code to
 * print the endianness of the machine
 * Return: void
 */

int get_endianness(void)
{
int n = 1;
char *p = (char *)&n;
if (*p == 1)
return (1);
else
return (0);
}
