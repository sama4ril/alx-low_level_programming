#include "main.h"

/**
 *_strlen - returns the length of a string
 *@s: string
 *Return: length
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
