#include <stdio.h>

/**
 * main - writes a program that prints its name, followed by a new line.
 * If yu rename the program, it will print the new name, without having
 * to icompile it again
 * You should not remove the path before the name of the program
 *
 * @argc: This is the argument count
 * @argv: This is the argument vector
 *
 * Return: This return to 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
