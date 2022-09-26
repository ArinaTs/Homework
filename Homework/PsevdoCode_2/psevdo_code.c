#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "rus");
	int x, y, z;
	printf("¬ведите значени€ переменных через пробел: ");
	scanf_s("%d %d %d", &x, &y, &z);
	if (x != y && y != z && x != z) {
		if (x > y && x > z) {
			z = z + x;
		}
		else if (y > x && y > z) {
			z = z + y;
		}
		else {
			z = z * z;
		}
		printf("z = %d\n", z);
	}
	else {
		if (x == y && y == z && x == z) {
			printf("¬се переменные равны между собой\n");
		}
		else {
			if (x == y && y != z && x != z) {
				printf("x = y\n");
			}
			else if (x != y && y == z && x != z) {
				printf("y = z\n");
			}
			else {
				printf("x = z\n");
			}
		}
	}
	system("pause");
	return 0;

}