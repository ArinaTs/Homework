#include <iostream>
#include <string>

struct Dimension { // шкаф (описываетс€ габаритами)
	int height;
	int depth;
	int width;
};
// ввод параметров шкафа
void input(struct Dimension* sizes) {
	std::cout << "Input height: ";
	std::cin >> (*sizes.height);
	std::cout << "Input depth: ";
	std::cin >> (*sizes.depth);
	std::cout << "Input width: ";
	std::cin >> (*sizes.width);
}
// расчЄт поверхности шкафа
int calculateSquare(struct Dimension sizes) {
	int square_bok, square_updown, square_front;
	// 2 боковые крышки
	square_bok = 2 * sizes.height * sizes.depth;
	// верхн€€ и нижн€€ крышки
	square_updown = 2 * sizes.width * sizes.depth;
	// 1 передн€€ крышка
	square_front = sizes.height * sizes.width;
	square = square_bok + square_updown + square_front;
	return square;
}
// расчЄт объЄма шкафа
int calculateVolume(struct Dimension sizes) {
	int V = sizes.height * sizes.depth * sizes.width;
	return V;
}
// расчЄт сколько краски нужно на весь шкаф
// consumption Ц расход краски на м2
float calculateDye(struct Dimension sizes, float consumption) {
	// с помощью написанной ранее функции вычисл€ем площадь поверхности
	int square = calculateSquare(sizes);
	// зна€ расход и площадь вычисл€ем сколько краски нужно
	float dye_needed = square * consumption;
	return dye_needed;
}