#include <stdio.h>
/**
 * print_last_digit - prints the last digit of a number
 * @c: is number to op on
 * Return: value of the last digit of the number
 */
void jack_bauer(void)
{
int hour, minute;
for (hour = 0; hour < 24; hour++)
{
for (minute = 0; minute < 60; minute++)
{
printf("%02d:%02d\n", hour, minute);
}
}
}
int main(void)
{
jack_bauer();
return 0;
}
