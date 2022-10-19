#include <stdio.h>
#include <locale.h>
#include <malloc.h>

int main() {
	setlocale(LC_ALL, "rus");
	int* mass;
	int size;
	printf("������� ������ �������: ");
	scanf_s("%d", &size);
	mass = (int*)malloc(sizeof(int) * size);
	printf("������� ������: ");
	for (int i = 0; i < size; i++) {
		scanf_s("%d", &mass[i]);
	}
	int k = 0;
	for (int i = 0; i < size - 1; i++) {
		if (mass[i] > mass[i - 1] && mass[i] > mass[i + 1]) {
			k++;
		}
	}
	int* massmax;
	massmax = (int*)malloc(sizeof(int) * k);

	printf("����������� �� %d ��������� ���������� [ ", k);
	for (int i = 0; i < size - 1; i++) {
		if (mass[i] > mass[i - 1] && mass[i] > mass[i + 1]) {
			printf("%d ", mass[i]);
		}
	}
	printf("] ����� ");

	int num = 0;
	for (int i = 0; i < size - 1; i++) {
		if (mass[i] > mass[i - 1] && mass[i] > mass[i + 1]) {
			massmax[num] = mass[i];
			num++;
		}
	}
	int min;
	min = massmax[0];
	for (int i = 1; i < k; i++) {
		if (massmax[i] < min)
			min = massmax[i];
	}
	printf("%d", min);
	free(massmax);
	free(mass);
	return 0;
}