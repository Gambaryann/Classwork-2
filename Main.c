#include <locale.h>
#include <stdio.h>

int main(void)
{
	setlocale(LC_CTYPE, "RUS");
	int N = 12;
	int K = 33;
	printf("Сейчас %d часов %d минут %s секунд\n", N, K, "ноль");
	printf("Идет %d минута суток\n", N * 60 + K);
	printf("До полуночи осталось %d часов и %d минут\n", 24 - N, 60 - K);
	printf("С 8.00 прошло %d секунд\n", (N * 60 * 60 + K * 60) - 8 * 60 * 60);
	printf("Текущий час = %10.3f суток и текущая минута = %.1f часа\n", N / 24., K / 24.);
	

	zadanie3();

	getchar();
	return 0;
}