#include <locale.h>
#include <stdio.h>

int task1(void)
{
	setlocale(LC_CTYPE, "RUS");
	printf("%5d\n * \n %5d \n ________\n %.1f", -5, 300000, -5 * 300000.);

	getchar();
	return 0;
}