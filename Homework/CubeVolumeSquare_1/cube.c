#include <stdio.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "rus");
    int a;
    int V, S_side, S_full;
    printf("������� ����� ����� ����: ");
    scanf("%d", &a);
    V = pow(a, 3);
    S_side = pow(a, 2) * 6;
    S_full = pow(a, 2) * 4;
    printf("���������:\n����� = %d\n������� ������ ����������� = %d\n������� ������� ����������� = %d\n", V, S_full, S_side);

    return 0;
}