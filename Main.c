#include <locale.h>
#include <stdio.h>

int main(void)
{
	setlocale(LC_CTYPE, "RUS");
	int N = 12;
	int K = 33;
	printf("������ %d ����� %d ����� %s ������\n", N, K, "����");
	printf("���� %d ������ �����\n", N * 60 + K);
	printf("�� �������� �������� %d ����� � %d �����\n", 24 - N, 60 - K);
	printf("� 8.00 ������ %d ������\n", (N * 60 * 60 + K * 60) - 8 * 60 * 60);
	printf("������� ��� = %10.3f ����� � ������� ������ = %.1f ����\n", N / 24., K / 24.);
	

	zadanie3();

	getchar();
	return 0;
}