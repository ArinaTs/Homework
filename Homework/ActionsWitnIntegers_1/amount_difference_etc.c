#include <stdio.h>

int main()
{
    int a, b;
    int plus, minus, multi, ost;
    float division, av_sq, av_mod;
    printf("¬ведите два числа (через пробел): ");
    scanf_s("%d %d", &a, &b);
    plus = a + b;
    minus = a - b;
    multi = a * b;
    division = 1.0 * a / b;
    av_sq = (sqrt(a) + sqrt(b)) / 2;
    av_mod = (abs(a) + abs(b)) / 2;
    ost = a % b;
    printf("%d %d %d %.2f %.2f %.2f %d", plus, minus, multi, division, av_sq, av_mod, ost);

    return 0;
}