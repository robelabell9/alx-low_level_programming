#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: write a program that prints all posiible
 * different combination of two digits
 * Numbers must be separeted by ,, followed by a space
 * The two digits must be differnt
 * you are not allowd to use any variable of tye char
 * All your code should be that main function 
 * Return: 0
 */
int main(void)
{
	int c;
	int d = 0;
	{
		while (d < 10)
		{
			c = 0;
			while (c < 10)
			{
				putchar('0' + d);
				putchar('0' + c);

				if (c + d != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			c++;
		}
		d++;
	}
	putchar('\n');
	return (0);
}
