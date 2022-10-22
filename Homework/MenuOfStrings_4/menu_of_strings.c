#include <stdio.h>
#include <malloc.h>
#include <locale.h>

char reg_str(char* str, int size)
{
	printf("1. � ������� �������\n2. � ������ �������\n3. � �������������� �������\n4. �����\n��� �����: ");
	int chreg;
	scanf_s("%d", &chreg);
	if (chreg == 1) {
		for (int i = 0; i < size; i++) {
			if (str[i] > 96 && str[i] < 123) {
				str[i] = str[i] - 32;
				printf("%c", str[i]);
			}
			else if (str[i] > 64 && str[i] < 91) {
				printf("����� ��� ��������� � ������� ��������.");
				break;
			}
		}
		printf("\n");
		reg_str(str, size);
	}
	else if (chreg == 2) {
		for (int i = 0; i < size; i++) {
			if (str[i] > 64 && str[i] < 91) {
				str[i] = str[i] + 32;
				printf("%c", str[i]);
			}
			else if (str[i] > 96 && str[i] < 123) {
				printf("����� ��� ��������� � ������ ��������.");
				break;
			}
		}
		printf("\n");
		reg_str(str, size);
	}
	else if (chreg == 3) {
		for (int i = 0; i < size; i++) {
			if (str[i] > 64 && str[i] < 91) {
				str[i] = str[i] + 32;
				printf("%c", str[i]);
			}
			else if (str[i] > 96 && str[i] < 123) {
				str[i] = str[i] - 32;
				printf("%c", str[i]);
			}
		}
		printf("\n");
		reg_str(str, size);
	}
	else if (chreg == 4) {
		menu(str);
	}
	return 0;
}

char chang_str(char* str, int size)
{
	for (int i = size; i > 0; i--) {
		printf("%c", str[i - 1]);
	}
	printf("\n");
	menu(str);
	return 0;
}

char del_str(char* str)
{
	int del;
	printf("������� ��������: ");
	scanf_s("%d", &del);
	str[del] = '\0'; // �������� �������� ����� ������ � ���������� �������
	puts(str);
	menu(str);
	return 0;
}

char new_str(char* str)
{
	printf("������� ����� ������: ");
	getchar();
	gets(str);
	puts(str);
	menu(str);
	return 0;
}

int menu(char* str)
{
	int choose;
	int size = 0;
	while (str[size] != '\0') {
		size++; //������ ������
	}
	printf("�������� �������� ��� �������:\n1. �������� ������.\n2. �������� ������.\n3. ���������� ������.\n4. ������� �������.\n0. �����.\n");
	printf("��� �����: ");
	scanf_s("%d", &choose);
	if (choose == 1) {
		new_str(str);
	}
	else if (choose == 2) {
		del_str(str);
	}
	else if (choose == 3) {
		chang_str(str, size);
	}
	else if (choose == 4) {
		reg_str(str, size);
	}
	else if (choose == 0) {
		free(str);
		return 0;
	}
	return 0;
}

int main() {
	setlocale(LC_ALL, "rus");
	char* str;
	str = (char*)malloc(sizeof(char) * 100);
	printf("������� ������: ");
	gets(str);
	menu(str);
	system("pause");
	return 0;
}