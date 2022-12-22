#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: the string targeted
 * Return: returns the encoded string
 */
char *rot13(char *s)
{
	int x, y;

	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXY"
		"Zabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGH"
		"IJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; input[y] != '\0'; y++)
		{
			if (s[x] == input[y])
			{
				s[x] = output[y];
				break;
			}
		}
	}
	return (s);
}
