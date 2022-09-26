#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "rus");
    int x1, x2, x3, y1, y2, y3;
    int a, b, c, p;
    int P, S;
    printf("Введите координаты вершин треугольника в формате <x1 y1 x2 y2 x3 y3>: ");
    scanf_s("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);

    a = sqrt((x2 - x1) * (x2 - x1) + ((y2 - y1) * (y2 - y1)));
    b = sqrt((x3 - x2) * (x3 - x2) + ((y3 - y2) * (y3 - y2)));
    c = sqrt((x1 - x3) * (x1 - x3) + ((y1 - y3) * (y1 - y3)));
    P = a + b + c;
    p = P / 2;
    S = sqrt(p * (p - a) * (p - b) * (p - c));

    printf("Периметр треугольника: P = %d\n", P);
    printf("Площадь треугольника: S = %d\n", S);

    system("pause");
    return 0;
}