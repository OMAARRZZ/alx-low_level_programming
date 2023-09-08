#include <stdio.h>
/** main - prints outs letters 
 * Return: always 0 (successfull)
 */
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar('\n');
return 0;
}
