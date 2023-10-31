#include "main.h"
#include <stdlib.h>

/**
 * argtostr- Concatenates all the arguments in the
 * program
 *
 * @ac: Number of arguments
 * @av: A pointer to an array of pointers to
 * command line arguments
 *
 * Return: a pointer to a new string, NULL if
 * ac == 0 or av == NULL
 */

char *argtostr(int ac, char **av)
{
	int arg_counter, l_counter, size_counter, index_counter = 0;
	char *st;

	if (ac == 0 || av == NULL)
		return (NULL);

	st = malloc(sizeof(char) * ac);

	if (st == NULL)
		return (NULL);

	for (arg_counter = 0; arg_counter < ac; arg_counter++)
	{
		for (l_counter = 0; av[arg_counter][l_counter]; l_counter++)
		{
			st[index_counter] = av[arg_counter][l_counter];
		}

		st[index_counter] = '\n';
	}

	for (arg_counter = 0; arg_counter < ac; arg_counter++)
	{
		for (l_counter = 0; av[arg_counter][l_counter]; l_counter++)
		{
			size_counter++;
		}
	}

	st[size_counter] = '\0';

	return (st);
}
