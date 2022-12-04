#include <iostream>
#include <string>

//массив Приемы пищи
struct Meals {
	std::string first;
	std::string second;
	std::string snack;
	std::string drink;
};
int main() {
	struct Meals* food_of_the_day;
	struct Meals breakfest = { "porridge", "eggs", "apple", "coffee" }, lunch = { "soup", "rice", "bread", "compote" }, dinner = { "pasta", "cutlet", "cucumber", "tea" };
	food_of_the_day = new struct Meals[3];

	food_of_the_day[0].first = breakfest.first;
	food_of_the_day[0].second = breakfest.second;
	food_of_the_day[0].snack = breakfest.snack;
	food_of_the_day[0].drink = breakfest.drink;

	food_of_the_day[1].first = lunch.first;
	food_of_the_day[1].second = lunch.second;
	food_of_the_day[1].snack = lunch.snack;
	food_of_the_day[1].drink = lunch.drink;

	food_of_the_day[2].first = dinner.first;
	food_of_the_day[2].second = dinner.second;
	food_of_the_day[2].snack = dinner.snack;
	food_of_the_day[2].drink = dinner.drink;

	return 0;
}


//массив Члены семьи
struct Family {
	std::string name;
	int age;
	std::string profession;
	std::string hobby;
};
int main() {
	struct Family* Brown;
	struct Family dad = { "Bob", 50, "engineer", "football" }, mother = { "Emily", 43, "teacher", "chess" }, son = { "Max", 20, "student", "climbing" };
	Brown = new struct Family[3];

	Brown[0].name = dad.name;
	Brown[0].age = dad.age;
	Brown[0].profession = dad.profession;
	Brown[0].hobby = dad.hobby;

	Brown[1].name = mother.name;
	Brown[1].age = mother.age;
	Brown[1].profession = mother.profession;
	Brown[1].hobby = mother.hobby;

	Brown[2].name = son.name;
	Brown[2].age = son.age;
	Brown[2].profession = son.profession;
	Brown[2].hobby = son.hobby;

	return 0;
}