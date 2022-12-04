#include <iostream>
#include <string>

struct Time {
	int hours;
	int minutes;
	int seconds;
};

//4 примера функций заполнения структур данных
//Пример 1.
struct Time createTime1(int h, int m, int s) {
	struct Time lesson;
	lesson.hours = h;
	lesson.minutes = m;
	lesson.seconds = s;
	return lesson;
}

//Пример 2.
void createTime2(struct Time* lesson) {
	int hours, minutes, seconds;

	std::cout << "Input hours: ";
	std::cin >> hours;
	std::cout << "Input minutes: ";
	std::cin >> minutes;
	std::cout << "Input seconds: ";
	std::cin >> seconds;

	lesson->hours = hours;
	lesson->minutes = minutes;
	lesson->seconds = seconds;
}

//Пример 3.
struct Time createTime3(struct Time lesson) {
	struct Time next_lesson;
	next_lesson.hours = lesson.hours;
	next_lesson.minutes = lesson.minutes;
	next_lesson.seconds = lesson.seconds;
}

//Пример 4.
void createTime4(struct Time* wakeUp) {
	std::cout << "Input hours: ";
	std::cin >> ((*wakeUp).hours);
	std::cout << "Input minutes: ";
	std::cin >> ((*wakeUp).minutes);
	std::cout << "Input seconds: ";
	std::cin >> ((*wakeUp).seconds);
}