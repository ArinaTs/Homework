#include <stdio.h>
#include <malloc.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "rus");
	char* str;
	int choose;
	str = (char*)malloc(sizeof(char) * 100);
	printf("������� ������: ");
	gets(str);
	int size = 0;

	while (str[size] != '\0') {
		size++;
	}
	printf("�������� �������� ��� �������:\n1. �������� ������.\n2. �������� ������.\n3. ���������� ������.\n4. ������� �������.\n0. �����.\n");
	printf("��� �����: ");
	scanf_s("%d", &choose);
	while (choose != 0) {
		if (choose == 1) {
			printf("������� ����� ������: ");
			getchar();
			gets(str);
			puts(str);
		}
		else if (choose == 2) {
			int del;
			printf("������� ��������: ");
			scanf_s("%d", &del);
			str[del] = '\0'; // �������� �������� ����� ������ � ���������� �������
			puts(str);

		}
		else if (choose == 3) {
			for (int i = size; i > 0; i--) {
				printf("%c", str[i - 1]);
			}
			printf("\n");
		}
		else if (choose == 4) {
			printf("1. � ������� �������\n2. � ������ �������\n3. � �������������� �������\n��� �����: ");
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
			}
		}

		printf("������ ������� ���-�� ���?\n��� �����: ");
		scanf_s("%d", &choose);
	}
	printf("�� ��������\n");
	free(str);
	system("pause");
	return 0;
}