#include <locale.h>
#include <stdio.h>

int zadanie3(void)
{
	setlocale(LC_CTYPE, "RUS");
	float n;
	n = 3;

	printf("����:\n\t %4.f\n\t %4.d\n\t _______\n�����:\n \t %+08.03f", n, 333, (n / 333));

	getchar();
	return 0;
}