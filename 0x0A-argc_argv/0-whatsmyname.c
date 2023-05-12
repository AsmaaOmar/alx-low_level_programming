/**
 * main -  program that prints its name
 * @argv: array of argument value
 * @argc: number of arg
 * Return: Always 0 (Success)
 */
#include <stdio.h>
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", *argv);
	return (0);
}

