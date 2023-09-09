#include <stdio.h>
/**
 * main - entry point
 * description: prints all numbers 3 diff digit numbers
 * Return: always 0 (successful)
 */
int main(void) {
int i, j, k;
for (i = 0; i <= 9; i++) {
for (j = i + 1; j <= 9; j++) {
for (k = j + 1; k <= 9; k++) {
putchar(i + '0');
putchar(j + '0');
putchar(k + '0');
if (i != 7 || j != 8 || k != 9) {
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
