#include <stdio.h>
#include <locale.h>
#include <malloc.h>

int num_of_signs(char* str, int size) {
	int signs = 0;
	for (int i = 0; i < size; i++) {
		if (str[i] != ' ') {
			signs++;
		}
	}
	printf("Количество значимых знаков: %d\n", signs);
	return 0;
}
int num_of_abc(char* str, int size) {
	int abc = 0;
	for (int i = 0; i < size; i++) {
		if (str[i] > 96 && str[i] < 223) {
			abc++;
		}
	}
	printf("Количество строчных букв: %d\n", abc);
	return 0;
}
int num_of_ABC(char* str, int size) {
	int ABC = 0;
	for (int i = 0; i < size; i++) {
		if (str[i] > 64 && str[i] < 91) {
			ABC++;
		}
	}
	printf("Количество заглавных букв: %d\n", ABC);
	return 0;
}
int num_of_words(char* str, int size) {
	int words = 1;
	for (int i = 0; i < size; i++) {
		if (str[i] == 32) {
			words++;
		}
	}

	printf("Количество слов: %d\n", words);
	return 0;
}


int main() {
	setlocale(LC_ALL, "rus");
	char* str;
	str = (char*)malloc(sizeof(char) * 100);
	printf("Введите строку: ");
	gets(str);
	int size = 0;
	while (str[size] != '\0') {
		size++;
	}
	num_of_signs(str, size);
	num_of_abc(str, size);
	num_of_ABC(str, size);
	num_of_words(str, size);
	free(str);
	system("pause");
	return 0;
}