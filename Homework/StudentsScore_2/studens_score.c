#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "rus");
	int a, b, c;
	printf("Введите ваши оценки через пробел (по 5-балльной шкале, где -1 = неявка на экзамен: ");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a == 5 && b == 5 && c == 5) {
		printf("Вы отличник!");
	}
	else if (a >= 4 && b >= 4 && c >= 4) {
		printf("Вы хорошист!");
	}
	else if (a >= 3 && b >= 3 && c >= 3) {
		printf("Вы троечник!");
	}
	else {
		printf("Вы не сдали! :(");
	}

	return 0;
}