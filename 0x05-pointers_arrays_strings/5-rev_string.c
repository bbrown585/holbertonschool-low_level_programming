#include "main.h"

/**
 * rev_string - reverse
 * @s: idk
 * Return: 0.
 */
void rev_string(char *s)
{
	int j;
	int i;
	int temp;

	for (j = 0; s[j] != '\0'; j++)
	{
	}
	j = j - 1;
	i = 0;
		while (i < j)
		{
			temp = s[i];
			s[i] = s[j];
			s[j] = temp;
			i++;
			j--;
		}
}
