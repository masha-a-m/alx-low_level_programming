#include "main.h"
/**
 *jack_bauer - prints every minute of the day
 *
 *Return: 0
 */
void jack_bauer(void)
{
int min, hour;
for (hour = 0; hour <= 23; hour++)
{
for (min = 0; min <= 59; min++)
{
_putchar((hour / 10) + '0');
_putchar((hour % 10) + '0');
_putchar(':');
_putchar((min / 10) + '0');
_putchar((min % 10) + '0');												_putchar('\n');
}
}
}
