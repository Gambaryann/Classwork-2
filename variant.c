#include <locale.h>
#include <stdio.h>

int variant(void)
{	
	setlocale(LC_CTYPE, "RUS");
	int N = 7;
	int K = 12;

	printf("��� ������� %d", N % K +1);

	getchar();
	return 0;
}