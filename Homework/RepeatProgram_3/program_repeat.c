#include <stdio.h>
#include <locale.h>
#include <windows.h>
#include <math.h>
int menu() {
    int ch1;
    printf("Выбор фигуры:\n1. Прямоугольник.\n2. Треугольник.\n3. Круг.\n0. Выход\nВвод: ");
    scanf_s("%d", &ch1);
    if (ch1 == 1) {
        system("cls");
        return rectangle();
    }
    else if (ch1 == 2) {
        system("cls");
        return triangle();
    }
    else if (ch1 == 3) {
        system("cls");
        return circle();
    } else if (ch1 == 0) {
        system("cls");
        return 0;
    }
}
int rectangle () {
    int st_rec1, st_rec2;
    printf("Введите две стороны прямоугольника: ");
    scanf_s("%d %d", &st_rec1, &st_rec2);
    system("cls");
    return rectangle_menu(st_rec1, st_rec2);
}
int rectangle_menu(int st_rec1, int st_rec2) {
        int rm;
        printf("Меню:\n1. Найти площадь прямоугольника.\n2. Найти периметр прямоугольника.\n3. Найти диагональ прямоугольника.\n4. Вернуться к выбору фигуры.\n0. Выйти.\nВвод: ");
        scanf_s("%d", &rm);
        double res;
        if (rm == 1) {
            res = st_rec1 * st_rec2;
            printf("Площадь прямоугольника: %.2f\n", res);
            system("pause");
            system("cls");
            return rectangle_menu(st_rec1, st_rec2);
        } else if (rm == 2) {
            res = (st_rec1 + st_rec2) * 2;
            printf("Периметр прямоугольника: %.2f\n", res);
            system("pause");
            system("cls");
            return rectangle_menu(st_rec1, st_rec2);
        } else if (rm == 3) {
            res = (float)sqrt(pow(st_rec1, 2) + pow(st_rec2, 2));
            printf("Диагональ прямоугольника: %.2f\n", res);
            system("pause");
            system("cls");
            return rectangle_menu(st_rec1, st_rec2);
        } else if (rm == 4) {
            system("cls");
            return menu();
        }
        else if (rm == 0) {
            system("cls");
            return 0;
    }
}
int triangle() {
    int st_trian1, st_trian2;
    printf("Введите две стороны прямоугольного треугольника: ");
    scanf_s("%d %d", &st_trian1, &st_trian2);
    system("cls");
    return triangle_menu(st_trian1, st_trian2);
}
int triangle_menu(int st_trian1, int st_trian2) {
        int tm;
        printf("Меню:\n1. Найти площадь треуугольника.\n2. Найти треугольника.\n3. Найти гипотенузу треугольника.\n4. Вернуться к выбору фигуры.\n0. Выйти.\nВвод: ");
        scanf_s("%d", &tm);
        double res;
        if (tm == 1) {
            res = (st_trian1 * st_trian2) / 2;
            printf("Площадь треугольника: %.2f\n", res);
            system("pause");
            system("cls");
            return triangle_menu(st_trian1, st_trian2);
        }
        else if (tm == 2) {
            res = (float) sqrt(pow(st_trian1, 2) + pow(st_trian2, 2)) + st_trian1 + st_trian2;
            printf("Периметр прямоугольника: %.2f\n", res);
            system("pause");
            system("cls");
            return triangle_menu(st_trian1, st_trian2);
        }
        else if (tm == 3) {
            res = (float)sqrt(pow(st_trian1, 2) + pow(st_trian2, 2));
            printf("Гипотенуза прямоугольника: %.2f\n", res);
            system("pause");
            system("cls");
            return triangle_menu(st_trian1, st_trian2);
        }
        else if (tm == 4) {
            system("cls");
            return menu();
        }
        else if (tm == 0) {
            system("cls");
            return 0;

        }
}
int circle() {
    int rad;
    printf("Введите радиус круга: ");
    scanf_s("%d", &rad);
    system("cls");
    return circle_menu(rad);
}
int circle_menu(int rad) {
    int cm;
    printf("Меню:\n1. Найти площадь круга.\n2. Найти длину окружности круга.\n3. Найти диаметр круга.\n4. Вернуться к выбору фигуры.\n0. Выйти.\nВвод: ");
    scanf_s("%d", &cm);
    double res;
    if (cm == 1) {
        res = (float)3.14 * pow(rad, 2);
        printf("Площадь круга: %.2f\n", res);
        system("pause");
        system("cls");
        return circle_menu(rad);
    }
    else if (cm == 2) {
        res = (float)2 * 3.14 * rad;
        printf("Длина окружности круга: %.2f\n", res);
        system("pause");
        system("cls");
        return circle_menu(rad);;
    }
    else if (cm == 3) {
        res = rad * 2;
        printf("Диаметр круга: %.2f\n", res);
        system("pause");
        system("cls");
        return circle_menu(rad);
    }
    else if (cm == 4) {
        system("cls");
        return menu();
    }
    else if (cm == 0) {
        system("cls");
        return 0;

    }
}
int main()
{
    setlocale(LC_ALL, "rus");
    int k = 0;
    printf("Добро пожаловать!");
    Sleep(2000);
    system("cls");
    while (k <= 1) {
        printf("Загрузка.");
        Sleep(300);
        printf(".");
        Sleep(300);
        printf(".");
        Sleep(300);
        k = k + 1;
        system("cls");
    }
    menu();
    system("pause");
    return 0;
}