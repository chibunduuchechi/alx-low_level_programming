#include"main.h"

/**
 * jack_bauer- prints every minute of the day
 */

void jack_bauer(void)

{
	int mins, hrs;

	for (hrs = 0; hrs <= 23; ++hrs)
	{
		for (mins = 0; mins <= 59; ++mins)
		{
			_putchar((hrs / 10) + 48);
			_putchar((hrs % 10) + 48);
			_putchar(':');
			_putchar((mins / 10) + 48);
			_putchar((mins % 10) + 48);
			_putchar('\n');
		}
	}
}


