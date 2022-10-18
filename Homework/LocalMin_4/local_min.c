#include <stdio.h>
#include <locale.h>
#include <malloc.h>

int main() {
	setlocale(LC_ALL, "rus");
	int* mass;
	int size;
	printf("¬ведите размер массива: ");
	scanf_s("%d", &size);
	mass = (int*)malloc(sizeof(int) * size);
	printf("¬ведите массив: ");
	for (int i = 0; i < size; i++) {
		scanf_s("%d", &mass[i]);
	}
	int k = 0;
	for (int i = 0; i < size - 1; i++) {
		if (mass[i] < mass [i - 1] && mass[i] < mass[i + 1]) {
			k++;
		}
	}
	printf("–езультат: %d локальных минимума", k);free(mass);
	return 0;
}