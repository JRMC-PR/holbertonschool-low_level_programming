#include <stdio.h>
#include "main.h"
/**
 *main- Execute code
 *Return: 0 of success
 *
 */
int main(void)
{
	/*Variable*/
	int i, j, m3, m5;
	char fb[]="FizzBuzz", p;

	for (i = 0; i < 101; i++)
	{
		m3 = i % 3;
		m5 = i % 5;
		if (m3 == 0 && m5 == 0)
		{
			for (j = 0; j < 9; j++)
			{
				p = fb[i];
				_putchar(p + '0');
			}
			_putchar(' ');
		}
		else if (m3 == 0 && m5 != 0)
		{
			for (j = 0; j < 4; j++)
			{
				p = fb[j];
				_putchar(p + '0');
			}
		}
		else if (m3 != 0 && m5 == 0)
		{
			for (j = 4; j < 9; j++)
			{
				p = fb[j];
				_putchar(p + '0');
			}
		}
		else if (i >= 10)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) +'0');
		}
		else
		{
			_putchar(i);
		} /*end if else if */
	} /*end outer for*/
	_putchar('\n');
	return (0);
} /*end main */
