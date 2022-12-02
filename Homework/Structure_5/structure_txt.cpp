/*
�������� ����� - 3 ����� ����� (������, �������, ������)
����� � ��������-�������� - ��� 3 ������ (�����, ��������, ������������), 3 ����� ����� (��� �������, ���-�� �������, �������)
���� - ��� 3 ����� ����� (�����, ����, ��������), ������������ ����� (�������)
��� - ��� 3 ������ (�������, ���, ��������)
������� - ��� 1 ������ (� ������ ��� �������), 1 ����� ����� (���-�� �������)
����� - ��� 3 ����� ����� (����, ������, �������)
������ - ��� 2 ������ (��������, ������), 1 ����� ����� (������), 
��������� - ��� 2 ����� ����� (���������, ���������), 2 ������ (��������, �������)
��������� ���� - ��� 2 ����� ����� (����, ���)
*/

/*
�������� - ��� ��� (�������, ��� � �������� ���������, ��������� ����� ��������� ��� ������������� ���� -  ���), ���� (���� ��������), ������������ ����� (�����), ����� ����� (���������� ����� / ����� ������� ����), 
������ (���������)
����� (����������) - ��� ���� (�����, ����, ��������, �������), ������ (��������), ������������ ����� (�����)
������� - ��� ��� (�������, ���, ��������), 2 ����� ����� (�������, ����), 2 ������ (���������, �������������)
������� - ��� ��� (�������, ���, ��������), ��������� ���� (����, ���), 1 ����� ����� (�������), 1 ������ (�������)
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

//3 ������� ���������� � ������������� �������� ������ ������� 1 (����� 1)
//������ 1.
struct Time {
	int hours;
	int minutes;
	int seconds;
};
int main() {
	struct Time Arrive = {12, 30, 45};
	return 0;
}
//������ 2.
struct Copybook {
	std::string type;
	int num_of_pages;
};
int main() {
	struct Copybook Math;
	Math.type = "� ������";
	Math.num_of_pages = 48;
}
//������ 3.
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
//������ ���������� � ������������� �������� ������ ������� 1 (����� 2).
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

	