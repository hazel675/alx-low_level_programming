#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed to the program
 * @argc: Number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i = argc - 1;

	printf("%d\n", i);
	return (0);
}
