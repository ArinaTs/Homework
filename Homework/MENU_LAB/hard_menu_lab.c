#include <math.h>
#include <locale.h>
#include <stdio.h>
#include <string.h>
#include<malloc.h>
// управл¤ющие консолью библиотеки
#include <windows.h>
#include <conio.h>

#define MENU_SIZE 3
#define MENU_SIZE_ALGORITM 3
#define MENU_SIZE_POISK 3
#define MENU_SIZE_SETING 3
#define MENU_SIZE_SORTIROVKA 2


// основные ключи, которые могут пригодитьс¤

#define KEY_EXIT 27
#define KEY_ENTER 13
#define ARROW_KEY 224
#define KEY_SPACE 0
#define KEY_BACKSPACE 8

#define KEY_ARROW_RIGHT 77
#define KEY_ARROW_LEFT 75
#define KEY_ARROW_UP 72
#define KEY_ARROW_DOWN 80

//доп функции

int LOOKING_MASS(HANDLE hStdOut, int* size, int* mass)
{
	printf("Размер массива: %d\n", *size);
	printf("Значения массива: ");
	for (int i = 0; i < *size; i++)
	{
		printf("%d ", mass[i]);
	}

	printf("\n");
}

int MASS(HANDLE hStdOut, int* size, int* mass)
{
	printf("Введите размер массива: ");
	if (*size != 0) {
		char k = '0';
		while (k != '\n') {
			k = getchar();
		}
		free(mass);
	}
	int temp;
	scanf_s("%d", &temp);
	*size = temp;
	mass = (int*)malloc(sizeof(int) * (*size));
	system("cls");
	printf("Введите значения в массив: ");
	for (int i = 0; i < *size; i++)
	{
		scanf_s("%d", &mass[i]);
	}
	for (int g = 0; g < *size; g++)
	{
		printf("%d ", mass[g]);
	}
	printf("\n");

	SETING(hStdOut, size, mass);
}

int SORTIROVKA(HANDLE hStdOut, int* size, int* mass)
{
	int choose_pos; // переменна¤ дл¤ хранени¤ выбранного пункта меню
	int iKey; // переменна¤ дл¤ фиксации нажатой клавиши
	int exit_flag; // флаг на завершение программы
	COORD cursorPos; // управление положением курсора, чтобы мен¤ть выводимый текст

	char* menu[MENU_SIZE_SORTIROVKA] = { "Пузырьковая сортировка", "Назад" };

	// инициализаци¤ (заполнение значени¤ми) переменных
	exit_flag = 0;
	choose_pos = 0;

	while (!exit_flag) {
		/* 1. вывод меню с переключением */

		// сброс консоли в стартовое положение
		system("cls");
		iKey = 67;
		cursorPos = (COORD){ 0, 0 };
		SetConsoleCursorPosition(hStdOut, cursorPos);

		// контроль нажати¤ клавиш
		while (iKey != KEY_EXIT && iKey != KEY_ENTER) {
			switch (iKey) {
			case KEY_ARROW_UP:
				choose_pos--;
				break;
			case KEY_ARROW_DOWN:
				choose_pos++;
				break;
			}

			system("cls");

			// зацикливание перелистывани¤ меню
			if (choose_pos < 0) { choose_pos = MENU_SIZE_SORTIROVKA - 1; }
			if (choose_pos > MENU_SIZE_SORTIROVKA - 1) { choose_pos = 0; }

			for (int i = 0; i < MENU_SIZE_SORTIROVKA; i++) {
				cursorPos = (COORD){ 3, i };
				SetConsoleCursorPosition(hStdOut, cursorPos);
				printf("%s \n", menu[i]);
			}

			// обозначение выбранной позиции
			cursorPos = (COORD){ 0, choose_pos };
			SetConsoleCursorPosition(hStdOut, cursorPos);
			printf("«", iKey);
			cursorPos = (COORD){ strlen(menu[choose_pos]) + 3 + 1, choose_pos };
			SetConsoleCursorPosition(hStdOut, cursorPos);
			printf("»");

			// ожидание нового нажати¤ клавиши
			iKey = _getch();
		}

		/* 2. основна¤ часть программы */
		switch (choose_pos) {
		case 0:
			system("cls");
			ALGORITM(hStdOut, size, mass);
			system("pause");
			break;
		case 1:
			system("cls");
			ALGORITM(hStdOut, size, mass);
			system("pause");
			break;
		}
	}
}

int SETING(HANDLE hStdOut, int* size, int* mass)
{
	int choose_pos; // переменна¤ дл¤ хранени¤ выбранного пункта меню
	int iKey; // переменна¤ дл¤ фиксации нажатой клавиши
	int exit_flag; // флаг на завершение программы
	COORD cursorPos; // управление положением курсора, чтобы мен¤ть выводимый текст

	char* menu[MENU_SIZE_SETING] = { "Задать массив", "Посмотреть текущий массив", "Назад" };

	// инициализаци¤ (заполнение значени¤ми) переменных
	exit_flag = 0;
	choose_pos = 0;

	while (!exit_flag) {
		/* 1. вывод меню с переключением */

		// сброс консоли в стартовое положение
		system("cls");
		iKey = 67;
		cursorPos = (COORD){ 0, 0 };
		SetConsoleCursorPosition(hStdOut, cursorPos);

		// контроль нажати¤ клавиш
		while (iKey != KEY_EXIT && iKey != KEY_ENTER) {
			switch (iKey) {
			case KEY_ARROW_UP:
				choose_pos--;
				break;
			case KEY_ARROW_DOWN:
				choose_pos++;
				break;
			}

			system("cls");

			// зацикливание перелистывани¤ меню
			if (choose_pos < 0) { choose_pos = MENU_SIZE_SETING - 1; }
			if (choose_pos > MENU_SIZE_SETING - 1) { choose_pos = 0; }

			for (int i = 0; i < MENU_SIZE_SETING; i++) {
				cursorPos = (COORD){ 3, i };
				SetConsoleCursorPosition(hStdOut, cursorPos);
				printf("%s \n", menu[i]);
			}

			// обозначение выбранной позиции
			cursorPos = (COORD){ 0, choose_pos };
			SetConsoleCursorPosition(hStdOut, cursorPos);
			printf("«", iKey);
			cursorPos = (COORD){ strlen(menu[choose_pos]) + 3 + 1, choose_pos };
			SetConsoleCursorPosition(hStdOut, cursorPos);
			printf("»");

			// ожидание нового нажати¤ клавиши
			iKey = _getch();
		}

		/* 2. основна¤ часть программы */
		switch (choose_pos) {
		case 0:
			system("cls");

			MASS(hStdOut, size, mass);
			system("pause");
			break;
		case 1:
			system("cls");
			LOOKING_MASS(hStdOut, size, mass);
			system("pause");
			break;
		case 2:
			system("cls");
			MENU(hStdOut, size, mass);
			system("pause");
			break;
		}
	}
}

int POISK(HANDLE hStdOut, int* size, int* mass)
{
	int choose_pos; // переменна¤ дл¤ хранени¤ выбранного пункта меню
	int iKey; // переменна¤ дл¤ фиксации нажатой клавиши
	int exit_flag; // флаг на завершение программы
	COORD cursorPos; // управление положением курсора, чтобы мен¤ть выводимый текст

	char* menu[MENU_SIZE_POISK] = { "Наивный поиск", "Бинарный поиск", "Назад" };

	// инициализаци¤ (заполнение значени¤ми) переменных
	exit_flag = 0;
	choose_pos = 0;

	while (!exit_flag) {
		/* 1. вывод меню с переключением */

		// сброс консоли в стартовое положение
		system("cls");
		iKey = 67;
		cursorPos = (COORD){ 0, 0 };
		SetConsoleCursorPosition(hStdOut, cursorPos);

		// контроль нажати¤ клавиш
		while (iKey != KEY_EXIT && iKey != KEY_ENTER) {
			switch (iKey) {
			case KEY_ARROW_UP:
				choose_pos--;
				break;
			case KEY_ARROW_DOWN:
				choose_pos++;
				break;
			}

			system("cls");

			// зацикливание перелистывани¤ меню
			if (choose_pos < 0) { choose_pos = MENU_SIZE_POISK - 1; }
			if (choose_pos > MENU_SIZE_POISK - 1) { choose_pos = 0; }

			for (int i = 0; i < MENU_SIZE_POISK; i++) {
				cursorPos = (COORD){ 3, i };
				SetConsoleCursorPosition(hStdOut, cursorPos);
				printf("%s \n", menu[i]);
			}

			// обозначение выбранной позиции
			cursorPos = (COORD){ 0, choose_pos };
			SetConsoleCursorPosition(hStdOut, cursorPos);
			printf("«", iKey);
			cursorPos = (COORD){ strlen(menu[choose_pos]) + 3 + 1, choose_pos };
			SetConsoleCursorPosition(hStdOut, cursorPos);
			printf("»");

			// ожидание нового нажати¤ клавиши
			iKey = _getch();
		}

		/* 2. основна¤ часть программы */
		switch (choose_pos) {
		case 0:
			system("cls");
			ALGORITM(hStdOut, size, mass);
			system("pause");
			break;
		case 1:
			system("cls");
			printf("Settings part in development\n");
			system("pause");
			break;
		case 2:
			system("cls");
			ALGORITM(hStdOut, size, mass);
			system("pause");
			break;
		}
	}
}

int ALGORITM(HANDLE hStdOut, int* size, int* mass) {

	int choose_pos; // переменна¤ дл¤ хранени¤ выбранного пункта меню
	int iKey; // переменна¤ дл¤ фиксации нажатой клавиши
	int exit_flag; // флаг на завершение программы
	COORD cursorPos; // управление положением курсора, чтобы мен¤ть выводимый текст

	char* menu[MENU_SIZE_ALGORITM] = { "Поиск", "Сортировка", "Назад" };

	// инициализаци¤ (заполнение значени¤ми) переменных
	exit_flag = 0;
	choose_pos = 0;

	while (!exit_flag) {
		/* 1. вывод меню с переключением */

		// сброс консоли в стартовое положение
		system("cls");
		iKey = 67;
		cursorPos = (COORD){ 0, 0 };
		SetConsoleCursorPosition(hStdOut, cursorPos);

		// контроль нажати¤ клавиш
		while (iKey != KEY_EXIT && iKey != KEY_ENTER) {
			switch (iKey) {
			case KEY_ARROW_UP:
				choose_pos--;
				break;
			case KEY_ARROW_DOWN:
				choose_pos++;
				break;
			}

			system("cls");

			// зацикливание перелистывани¤ меню
			if (choose_pos < 0) { choose_pos = MENU_SIZE_ALGORITM - 1; }
			if (choose_pos > MENU_SIZE_ALGORITM - 1) { choose_pos = 0; }

			for (int i = 0; i < MENU_SIZE_ALGORITM; i++) {
				cursorPos =
					(COORD){ 3, i };
				SetConsoleCursorPosition(hStdOut, cursorPos);
				printf("%s \n", menu[i]);
			}

			// обозначение выбранной позиции
			cursorPos = (COORD){ 0, choose_pos };
			SetConsoleCursorPosition(hStdOut, cursorPos);
			printf("«", iKey);
			cursorPos = (COORD){ strlen(menu[choose_pos]) + 3 + 1, choose_pos };
			SetConsoleCursorPosition(hStdOut, cursorPos);
			printf("»");

			// ожидание нового нажати¤ клавиши
			iKey = _getch();
		}

		/* 2. основна¤ часть программы */
		switch (choose_pos) {
		case 0:
			system("cls");
			POISK(hStdOut, size, mass);
			system("pause");
			break;
		case 1:
			system("cls");
			SORTIROVKA(hStdOut, size, mass);
			system("pause");
			break;
		case 2:
			system("cls");
			MENU(hStdOut, size, mass);
			system("pause");
			break;
		}
	}
}

int MENU(HANDLE hStdOut, int* size, int* mass)
{
	int choose_pos; // переменна¤ дл¤ хранени¤ выбранного пункта меню
	int iKey; // переменна¤ дл¤ фиксации нажатой клавиши
	int exit_flag; // флаг на завершение программы
	COORD cursorPos; // управление положением курсора, чтобы мен¤ть выводимый текст

	char* menu[MENU_SIZE] = { "Алгоритмы", "Настройки", "Выход" };

	// инициализаци¤ (заполнение значени¤ми) переменных
	exit_flag = 0;
	choose_pos = 0;

	while (!exit_flag) {
		/* 1. вывод меню с переключением */

		// сброс консоли в стартовое положение
		system("cls");
		iKey = 67;
		cursorPos = (COORD){ 0, 0 };
		SetConsoleCursorPosition(hStdOut, cursorPos);

		// контроль нажати¤ клавиш
		while (iKey != KEY_EXIT && iKey != KEY_ENTER) {
			switch (iKey) {
			case KEY_ARROW_UP:
				choose_pos--;
				break;
			case KEY_ARROW_DOWN:
				choose_pos++;
				break;
			}

			system("cls");

			// зацикливание перелистывани¤ меню
			if (choose_pos < 0) { choose_pos = MENU_SIZE - 1; }
			if (choose_pos > MENU_SIZE - 1) { choose_pos = 0; }

			for (int i = 0; i < MENU_SIZE; i++) {
				cursorPos = (COORD){ 3, i };
				SetConsoleCursorPosition(hStdOut, cursorPos);
				printf("%s \n", menu[i]);
			}

			// обозначение выбранной позиции
			cursorPos = (COORD){ 0, choose_pos };
			SetConsoleCursorPosition(hStdOut, cursorPos);
			printf("«", iKey);
			cursorPos = (COORD){ strlen(menu[choose_pos]) + 3 + 1, choose_pos };
			SetConsoleCursorPosition(hStdOut, cursorPos);
			printf("»");

			// ожидание нового нажати¤ клавиши
			iKey = _getch();
		}

		/* 2. основна¤ часть программы */
		switch (choose_pos) {
		case 0:
			system("cls");
			ALGORITM(hStdOut, size, mass);
			system("pause");
			break;
		case 1:
			system("cls");
			SETING(hStdOut, size, mass);
			system("pause");
			break;
		case 2:
			system("cls");
			printf("Goodbay!\n");
			system("pause");
			free(mass);
			_Exit(EXIT_SUCCESS);
			break;

		}
	}

	// вывод результата
	return 0;
}
// объ¤вление главной функции
int main() {
	// настройки
	setlocale(LC_ALL, "rus");
	// задаЄм название консольного окна
	system("title Application");

	// устанавливаем взаимодействие с русскими буквами
	SetConsoleCP(1251); // установка кодовой страницы win-cp 1251 в поток ввода
	SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода

	// получаем дескриптор окна дл¤ обращени¤ к консоли
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

	// отключение мигани¤ курсора в консоли (в нашем меню курсор лишний)
	CONSOLE_CURSOR_INFO structCursorInfo;
	GetConsoleCursorInfo(hStdOut, &structCursorInfo);
	structCursorInfo.bVisible = FALSE;
	SetConsoleCursorInfo(hStdOut, &structCursorInfo);

	// задаЄм серый фон дл¤ окна консоли
	SetConsoleTextAttribute(hStdOut, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE);
	// очищаем экран, чтобы настройка цвета применилась
	system("cls");
	int size = 0;
	int* mass = NULL;
	// объ¤вление переменных
	MENU(hStdOut, &size, mass);
	return 0;
}