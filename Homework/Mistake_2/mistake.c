#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "rus");
	int age;
	scanf_s("%d", &age);
	if (age <= 13) {
		printf("%d - детство", age);
	}
	else if (14 <= age && age < 25) {
		printf("%d - молодость", age);
	}
	else if (25 <= age && age < 60) {
		printf("%d - зрелость", age);
	}
	else {
		printf("%d - старость", age);
	}
	return 0;
}
//ѕропущены фигурные скобки дл€ условий, двоеточие после 3 услови€, точка с зап€той после первого printf
//%f вместо %d, & в строчке scanf, scanf - небезопасный, необходим scanf_s, не подключен русский €зык
//недопустимо двойное неравенство