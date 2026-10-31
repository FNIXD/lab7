# Лабораторная работа №7
## Задание 1.1. Исследуйте работу программы (составьте блок-схему алгоритма)
```c
#include <stdio.h>
int main()
{
char c;
printf("Введите символы 'a' or 'b': ");
scanf("%c", &c);//считывание с консоли
switch (c)
{
	case 'a':
printf("Введено 'a'.\n");
break;
	case 'b':
printf("Введено 'b'.\n");
break;
	default:
printf("Неизвестный символ\n");
}
return 0;
}
```
### Алгоритм

1. Начало.
2. Вывести приглашение к вводу.
3. Считать символ `c`.
4. Если `c = 'a'` — вывести «Введено 'a'.» и перейти к пункту 7.
5. Если `c = 'b'` — вывести «Введено 'b'.» и перейти к пункту 7.
6. Иначе — вывести «Неизвестный символ».
7. Конец.

### Блок-схема
<img width="595" height="546" alt="изображение" src="https://github.com/user-attachments/assets/fce9dc7b-57cc-4c91-9a10-e6d3945edb3d" />

```
## Результат
```
Введите символы 'a' or 'b': a
Введено 'a'.

Введите символы 'a' or 'b': b
Введено 'b'.

Введите символы 'a' or 'b': z
Неизвестный символ
```
## Задание 1.2. Измените программу так, чтобы она определяла цифры и буквы
```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int is_digit(char c);
int is_letter(char c);

int main(void)
{
    char c;

    setlocale(LC_ALL, ".UTF8");

    printf("Введите символ: ");
    if (scanf("%c", &c) != 1)
    {
        printf("Ошибка: символ не введён.\n");
        return 1;
    }

    if (is_digit(c))
        printf("это цифра\n");
    else if (is_letter(c))
        printf("это буква\n");
    else
        printf("это не буква и не цифра\n");

    return 0;
}

int is_digit(char c)
{
    int result;

    result = (c >= '0' && c <= '9');

    return result;
}

int is_letter(char c)
{
    int result;

    result = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');

    return result;
}
```
## Результат
```
Введите символ: 7
это цифра

Введите символ: k
это буква

Введите символ: A
это буква

Введите символ: !
это не буква и не цифра
```
## Задание 2. Напишите программу «Калькулятор»
```c
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
```
## Результат
```
Введите выражение (например, 5+3, без пробелов).
Операции: + - * / ^ (степень): 5+3
=8.000000

Введите выражение (например, 5+3, без пробелов).
Операции: + - * / ^ (степень): 10-4
=6.000000

Введите выражение (например, 5+3, без пробелов).
Операции: + - * / ^ (степень): 2^10
=1024.000000

Введите выражение (например, 5+3, без пробелов).
Операции: + - * / ^ (степень): 5/0
Ошибка: деление на ноль.
```
## Выполнил
Студент Еркимбеков Дмитрий бИД-261
