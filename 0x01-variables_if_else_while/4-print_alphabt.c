#include <stdio.h>

/**
 * main - the function of the task
 *
 * Return: always zero
 */

int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
putchar(letter);

for (letter = 'A'; letter <= 'Z'; letter++)
putchar(letter);
putchar('\n');
return (0);
}
