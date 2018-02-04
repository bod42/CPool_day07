/*
** EPITECH PROJECT, 2017
** c code
** File description:
** pool
*/
#include <stdio.h>
#include <string.h>

int     my_strlen(char const *str);

char	*my_strncat(char *dest, char const *src, int nb)
{
	int len = my_strlen(dest);
	int i = 0;

	while (i < nb && src[i] != '\0') {
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
