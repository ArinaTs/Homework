#include <stdio.h>
#include <malloc.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "rus");
	char* str;
	int choose;
	str = (char*)malloc(sizeof(char) * 100);
	printf("Введите строку: ");
	gets(str);
	int size = 0;

	while (str[size] != '\0') {
		size++;
	}
	printf("Выберите действия над строкой:\n1. Заменить строку.\n2. Обрезать строку.\n3. Развернуть строку.\n4. Сменить регистр.\n0. Выход.\n");
	printf("Ваш выбор: ");
	scanf_s("%d", &choose);
	while (choose != 0) {
		if (choose == 1) {
			printf("Введите новую строку: ");
			getchar();
			gets(str);
			puts(str);
		}
		else if (choose == 2) {
			int del;
			printf("Введите значение: ");
			scanf_s("%d", &del);
			str[del] = '\0'; // обрезает введеную ранее строку с указанного символа
			puts(str);

		}
		else if (choose == 3) {
			for (int i = size; i > 0; i--) {
				printf("%c", str[i - 1]);
			}
			printf("\n");
		}
		else if (choose == 4) {
			printf("1. В верхний регистр\n2. В нижний регистр\n3. В противоположый регистр\nВаш выбор: ");
			int chreg;
			scanf_s("%d", &chreg);
			if (chreg == 1) {
				for (int i = 0; i < size; i++) {
					if (str[i] > 96 && str[i] < 123) {
						str[i] = str[i] - 32;
						printf("%c", str[i]);
					}
					else if (str[i] > 64 && str[i] < 91) {
						printf("Буквы уже находятся в верхнем регистре.");
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
						printf("Буквы уже находятся в нижнем регистре.");
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

		printf("Хотите сделать что-то ещё?\nВаш выбор: ");
		scanf_s("%d", &choose);
	}
	printf("До свидания\n");
	free(str);
	system("pause");
	return 0;
}