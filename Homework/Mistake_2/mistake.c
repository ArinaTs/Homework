#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "rus");
	int age;
	scanf_s("%d", &age);
	if (age <= 13) {
		printf("%d - �������", age);
	}
	else if (14 <= age && age < 25) {
		printf("%d - ���������", age);
	}
	else if (25 <= age && age < 60) {
		printf("%d - ��������", age);
	}
	else {
		printf("%d - ��������", age);
	}
	return 0;
}
//��������� �������� ������ ��� �������, ��������� ����� 3 �������, ����� � ������� ����� ������� printf
//%f ������ %d, & � ������� scanf, scanf - ������������, ��������� scanf_s, �� ��������� ������� ����
//����������� ������� �����������