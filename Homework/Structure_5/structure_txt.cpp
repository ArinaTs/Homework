/*
Габариты шкафа - 3 целых числа (высота, глубина, ширина)
Книга в интернет-магазине - это 3 строки (автор, название, издательство), 3 целых числа (год издания, кол-во страниц, артикул)
БЖУК - это 3 целых числа (белки, жиры, углеводы), вещественное число (калории)
ФИО - это 3 строки (фамилия, имя, отчество)
Тетрадь - это 1 строка (в клетку или линейку), 1 целое число (кол-во страниц)
Время - это 3 целых числа (часы, минуты, секунды)
Джинсы - это 2 строки (материал, модель), 1 целое число (размер), 
Телевизор - это 2 целых числа (диагональ, стоимость), 2 строки (название, артикул)
Параметры тела - это 2 целых числа (рост, вес)
*/

/*
Работник - это ФИО (фамилия, имя и отчество работника, описанные через структуру уже реализованную нами -  ФИО), дата (дата рождения), вещественное число (оклад), целое число (уникальный номер / номер личного дела), 
строка (должность)
Блюдо (кулинарное) - это БЖУК (белки, жиры, углеводы, калории), строка (название), вещественное число (масса)
Студент - это ФИО (фамилия, имя, отчество), 2 целых числа (возраст, курс), 2 строки (факультет, специальность)
Пациент - это ФИО (фамилия, имя, отчество), параметры тела (рост, вес), 1 целое число (возраст), 1 строка (диагноз)
*/

#include <iostream>
#include <string>
struct Dimensions {
	int height;
	int depth;
	int width;
};
struct Book {
	std::string author;
	std::string title;
	std::string publisher;
	int year_of_pub;
	int num_of_pages;
	int art;
};
struct BZhUK {
	int proteins;
	int fats;
	int carbohydrates;
	float calories;
};
struct FIO {
	std::string surname;
	std::string name;
	std::string patronymic;
};
struct Copybook {
	std::string type;
	int num_of_pages;
};
struct Time {
	int hours;
	int minutes;
	int seconds;
};
struct Jeans {
	std::string material;
	std::string model;
	int size;
};
struct TV {
	int diagonal;
	int price;
	std::string title;
	std::string art;
};
struct BodyParameters {
	int height;
	int weight;
};

struct Worker {
	struct FIO name;
	int day, month, year;
	float salary;
	int ID;
	std::string post;
};
struct Dish {
	struct BZhUK param;
	std::string name;
	float mass;
};
struct Student {
	struct FIO name;
	int age;
	int year_of_study;
	std::string faculty;
	std::string specialization;
};
struct Patient {
	struct FIO name;
	struct BodyParameters param;
	int age;
	std::string diagnosis;
};

//3 примера объявления и инициализации структур данных Задания 1 (часть 1)
//Пример 1.
struct Time {
	int hours;
	int minutes;
	int seconds;
};
int main() {
	struct Time Arrive = {12, 30, 45};
	return 0;
}
//Пример 2.
struct Copybook {
	std::string type;
	int num_of_pages;
};
int main() {
	struct Copybook Math;
	Math.type = "в клетку";
	Math.num_of_pages = 48;
}
//Пример 3.
struct BodyParameters {
	int height;
	int weight;
};
int main() {
	struct BodyParameters Bob;
	Bob.height = 180;
	Bob.weight = 83;
	return 0;
}
//Пример объявления и инициализации структур данных Задания 1 (часть 2).
struct FIO {
	std::string surname;
	std::string name;
	std::string patronymic;
}; 
struct BodyParameters {
	int height;
	int weight;
};
struct Patient {
	struct FIO Name;
	struct BodyParameters Param;
	int age;
	std::string diagnosis;
};
int main() {
	struct FIO Name = { "Bobov", "Bobik", "Bobovich" };
	struct BodyParameters Bobs = { 180, 80 };
	struct Patient Bob;
	Bob.age = 15;
	Bob.diagnosis = "schizophrenia";
	return 0;
}

	