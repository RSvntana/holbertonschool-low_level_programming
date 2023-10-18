#include <stdio.h>

/**
 * main - entry point
 * Return: always 0 (success)
 */
int main(void)
{
	char lowercase = 'a';
	char uppercase = 'A';

while (lowercase <= 'z')
{
	putchar(lowercase);
	lowercase++;
}
while (uppercase <= 'Z')
{
	putchar(uppercase);
	uppercase++;
}
putchar('\n');

return (0);
}
