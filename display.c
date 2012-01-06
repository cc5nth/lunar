/***
 *
 *
 */

#include <stdio.h>
#include "lunar.h"
#include "tables.h"

extern Date solar, lunar, gan, zhi, gan2, zhi2, lunar2;

void ReportMonth()
{
	Date d2;
	int dsom, i, w; // dsom: days of the month

	if (solar.month == 12) {
		d2.year = solar.year + 1;
		d2.month = 1;
	} else {
		d2.year = solar.year;
		d2.month = solar.month + 1;
	}
	solar.day = d2.day = 1;

	dsom = Solar2Day1(&d2) - Solar2Day1(&solar);


	printf("%d/%d (Lunar: %d/%d)\n",
		solar.year, solar.month,
		lunar.year, lunar.month);
	printf("---\n");
	printf(" Sun \t Mon \t Tue \t Wed \t Thu \t Fri \t Sat\n");
	for (i = 0; i < solar.weekday; i++) {
		printf("     \t");
	}
	for (i = 1; i < dsom + 1; i++) {
		solar.day = i;
		Solar2Lunar();
		printf("%2d/%2d\t", solar.day, lunar.day);
		if (solar.weekday == 6) {
			putchar('\n');
		}
	}
	putchar('\n');
	putchar('\n');
}

