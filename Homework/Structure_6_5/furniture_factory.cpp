#include <iostream>
#include <string>

struct Dimension { // ���� (����������� ����������)
	int height;
	int depth;
	int width;
};
// ���� ���������� �����
void input(struct Dimension* sizes) {
	std::cout << "Input height: ";
	std::cin >> (*sizes.height);
	std::cout << "Input depth: ";
	std::cin >> (*sizes.depth);
	std::cout << "Input width: ";
	std::cin >> (*sizes.width);
}
// ������ ����������� �����
int calculateSquare(struct Dimension sizes) {
	int square_bok, square_updown, square_front;
	// 2 ������� ������
	square_bok = 2 * sizes.height * sizes.depth;
	// ������� � ������ ������
	square_updown = 2 * sizes.width * sizes.depth;
	// 1 �������� ������
	square_front = sizes.height * sizes.width;
	square = square_bok + square_updown + square_front;
	return square;
}
// ������ ������ �����
int calculateVolume(struct Dimension sizes) {
	int V = sizes.height * sizes.depth * sizes.width;
	return V;
}
// ������ ������� ������ ����� �� ���� ����
// consumption � ������ ������ �� �2
float calculateDye(struct Dimension sizes, float consumption) {
	// � ������� ���������� ����� ������� ��������� ������� �����������
	int square = calculateSquare(sizes);
	// ���� ������ � ������� ��������� ������� ������ �����
	float dye_needed = square * consumption;
	return dye_needed;
}