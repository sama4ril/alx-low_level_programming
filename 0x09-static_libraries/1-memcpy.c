#include "main.h"

/**
 * _memcpy - function that copy memory
 *@dest: destination memory
 * ource memory
 *@n: interger number
 *Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
		unsigned int a;

		for (a = 0; a < n; a++)
			dest[a] = src[a];
		return (dest);
}
