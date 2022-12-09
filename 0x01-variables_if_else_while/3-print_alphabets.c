#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints alpha in lower and upper case
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch ='a';
	int CH ='A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
