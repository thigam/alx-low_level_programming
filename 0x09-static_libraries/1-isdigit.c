/*
 * File: 1-isdigit.c
 * Auth: Matthew T Mwangi
 */

#include "main.h"

/**
 * _isdigit- Checks whether integer is a digit
 * @c: Input integer being checked
 * Return: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >=48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
