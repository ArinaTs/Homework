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
	std::cin >> (sizes -> height);
	std::cout << "Input depth: ";
	std::cin >> (sizes -> depth);
	std::cout << "Input width: ";
	std::cin >> (sizes -> width);
}
// ������ ����������� �����
int calculateSquare(struct Dimension sizes) {
	int square_bok, square_updown, square_front, square;
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

//���������� ��������� ��������
float calculatePaintingCost(float paintConsumption, float paintWorkCost, float paintCost) {
	float paintingCost = paintConsumption * paintCost * paintWorkCost;
	return paintingCost;
}
float calculateCupboardCost(struct Dimension sizes, float cupboardCost, int square) {
	float shkafCost = cupboardCost * square; //��������� �����
	return shkafCost;
}
float calculateMassShkaf(struct Dimension sizes, float weight, int square) {
	float MassShkaf = weight * square;
	return MassShkaf;
}
float liftShkafCost(struct Dimension sizes, int floorsCount, float riseCost) {
	float liftCost = riseCost * floorsCount;
	return liftCost;
}
float calculateCost(struct Dimension sizes, float cupboardCost, float paintConsumption, float paintCost, float paintWorkCost, float weight, int floorsCount, float riseCost, float deliveryCost) {
	float finish;
	int square = calculateSquare(sizes);
	finish = calculatePaintingCost(paintConsumption, paintWorkCost, paintCost) + calculateCupboardCost(sizes, cupboardCost, square) + liftShkafCost(sizes, floorsCount, riseCost) + deliveryCost;
	return finish;
}
int main() {
	// ������ ������, ��������� ������ �� ��������, ��������� ������
	float paintConsumption = 0.8, paintWorkCost = 35.00, paintCost = 50.00;
	// ��������� ��������� ����� �� �2
	float cupboardCost = 650;
	// ��� ��/�2
	float weight = 0.9;
	// ����� ������
	int floorsCount = 5;
	float deliveryCost = 500.00;
	float riseCost = 2.50;
	struct Dimension cupboard;
	std::cout << "CUPBOARD PARAMETERS\n";
	input(&cupboard);
	float cost;

	int square = calculateSquare(cupboard);
	float shkafCost = calculateCupboardCost(cupboard, cupboardCost, square);
	float paintingCost = calculatePaintingCost(paintConsumption, paintWorkCost, paintCost);
	float delCost = liftShkafCost(cupboard, floorsCount, riseCost) + deliveryCost;
	std::cout << "Cost by position:" << "\n" << "- cupboard cost: " << shkafCost << "\n" << "- painting cost: " << paintingCost << "\n" << "- delivery cost (with rise): " << delCost << "\n";

	cost = calculateCost(cupboard, cupboardCost, paintConsumption, paintCost, paintWorkCost, weight, floorsCount, riseCost, deliveryCost);

	std::cout << "Total cost: " << cost;
	return 0;
}
