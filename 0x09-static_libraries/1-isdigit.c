#include "main.h"
/**
 * _isdigit - checks for digits 1-9
 * @c: character to check.
 * Return: 1 if c is a digit, otherwise return 0.
 */
int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
return (1);

return (0);
}
