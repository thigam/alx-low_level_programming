/*
 * File: 103-infinite_add.c
 * Auth: Matthew T Mwangi
 */

#include "main.h"

/**
 * infinite_add- Adds two numbers
 * @n1: One of the numbers being added together
 * @n2: The other number
 * @r: The buffer the function will use to store the result
 * @size_r: The buffer size
 * Return: If result can be stored in r, it will return
 * a pointer to r. If not, it will return zero.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int sum;

	sum = *n1 + *n2;

	if (sizeof(sum) <= size_r)
	{
		*r 
