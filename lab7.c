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