#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(void)
{
    float x;
    float y;
    char c;

    setlocale(LC_ALL, ".UTF8");

    printf("Введите выражение (например, 5+3, без пробелов).\n");
    printf("Операции: + - * / ^ (степень): ");
    if (scanf("%f%c%f", &x, &c, &y) != 3)
    {
        printf("Ошибка: неверный формат выражения.\n");
        return 1;
    }

    switch (c)
    {
    case '+':
        printf("=%f\n", x + y);
        break;
    case '-':
        printf("=%f\n", x - y);
        break;
    case '*':
        printf("=%f\n", x * y);
        break;
    case '/':
        if (y == 0)
        {
            printf("Ошибка: деление на ноль.\n");
            return 1;
        }
        printf("=%f\n", x / y);
        break;
    case '^':
        printf("=%f\n", pow(x, y));
        break;
    default:
        printf("Ошибка: неизвестная операция '%c'.\n", c);
        return 1;
    }

    return 0;
}