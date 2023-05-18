/**
 * string_nconcat - concatenates two strings.
 * @s1: enter string
 * @s2: enter string
 * @n: bytes of s2 to be concatenated
 * Return: pointer shall point to a newly allocated
 */
#include "main.h"
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int i, j, s1_len, s2_len;

	for (s1_len = 0; s1_len != '\0'; s1_len++)
		;
	for (s2_len = 0; s2_len != '\0'; s2_len++)
		;
	if (n < s2_len)
		c = malloc(sizeof(char) * (s1_len + n + 1));
	else
		c = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (c == NULL)
		return (NULL);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		c[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		c[i] = s2[j];
		i++;
	}
	c[i] = '\0';
	return (c);
}
