#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "rus");
	int amount = 0;
	int square_finish = 0;
	printf("���������� ���������: ");
	scanf_s("%d", &amount);
	printf("������� ��������: ");
	while (amount > 0) {
		int number;
		int square = 0;
		scanf_s("%d", &number);
		square = number * number;
		square_finish = square_finish + square;
		amount = amount - 1;
	}
	printf("����� ��������� ��������� �����: %d\n", square_finish);
	system("pause");
	return 0;
}