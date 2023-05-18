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
	unsigned int i = 0, j = 0, s_len1 = 0, s_len2 = 0;

	while (s1 && s1[s_len1])
		s_len1++;
	while (s2 && s2[s_len2])
		s_len2++;

	if (n < s_len2)
		c = malloc(sizeof(char) * (s_len1 + n + 1));
	else
		c = malloc(sizeof(char) * (s_len1 + s_len2 + 1));

	if (!c)
		return (NULL);

	while (i < s_len1)
	{
		c[i] = s1[i];
		i++;
	}

	while (n < s_len2 && i < (s_len1 + n))
		c[i++] = s2[j++];

	while (n >= s_len2 && i < (s_len1 + s_len2))
		c[i++] = s2[j++];

	c[i] = '\0';

	return (c);
}
