#include "main.h"
/* more headers goes there */

/**
 *jack_bauer - prints every minute of a day
*/

void jack_bauer(void)
{
	int m_1 = 0;
	int m_2 = 0;

	int h_1 = 0;
	int h_2 = 0;

	for (h_1 = 0; h_1 < 3 ; h_1++)
	{

		for (h_2 = 0; h_2 < 10 ; h_2++)
		{
			if (h_1 >= 2 && h_2 >= 4)
			{
			return;
			}
				for (m_2 = 0; m_2 < 6 ; m_2++)
				{
					for (m_1 = 0; m_1 < 10 ; m_1++)
					{
					_putchar('0' + h_1);
					_putchar('0' + h_2);
					_putchar(':');
					_putchar('0' + m_2);
					_putchar('0' + m_1);
					_putchar('\n');
					}
				}
		}
	}
}