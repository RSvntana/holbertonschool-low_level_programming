#include "main.h"
#include <stdio.h>

/**
 * _strlen - return the length of a string
 * Return: always 0
 */
int _strlen(char *s)
{
	int len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return len;
}
int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n" , len);
	return (0);
}
