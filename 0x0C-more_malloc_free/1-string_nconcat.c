#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * string _nconcat - concatenate two strings
 * @s1: string one
 * @s2: string two
 * Return: 
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{


	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
