#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char    letter;

   	letter = 'a';
    	while (letter <= 'z')
    	{
        	putchar(letter);
		putchar('\n');
        	letter++;
    	}
	
	return (0);
}
