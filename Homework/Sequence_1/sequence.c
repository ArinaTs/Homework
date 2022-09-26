#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "rus");
    int a, b, c;
    printf("¬ведите число: ");
    scanf("%d", &a);
    b = a + 1;
    c = b + 1;
    printf("1: %d\n 2: %d\n 3: %d\n", a, b, c);

    system("pause");
    return 0;
}