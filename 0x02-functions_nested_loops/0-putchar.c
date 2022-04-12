#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int char_array[] = {95, 112, 117, 116, 99, 104, 97, 114};

for (int i = 0; i < 8; i++)
{
	putchar(char_array[i]);
}
	return (0);
}
