#include <stdio.h>
#include "main.h"

/**
 * main -A function that print the number of arguments passed to the program
 * @argc: the number of arguments
 * @argv: An array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
