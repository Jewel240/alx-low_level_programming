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

{
if (letter != 'e' && letter != 'q')
putchar(letter);
}
putchar('\n');

return (0);
}
