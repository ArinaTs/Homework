#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "rus");
	int a, b, c;
	printf("������� ���� ������ ����� ������ (�� 5-�������� �����, ��� -1 = ������ �� �������: ");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a == 5 && b == 5 && c == 5) {
		printf("�� ��������!");
	}
	else if (a >= 4 && b >= 4 && c >= 4) {
		printf("�� ��������!");
	}
	else if (a >= 3 && b >= 3 && c >= 3) {
		printf("�� ��������!");
	}
	else {
		printf("�� �� �����! :(");
	}

	return 0;
}