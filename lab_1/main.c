#include <stdio.h>
// Лабораторная работа №1 Вариант 11
int main() {
    char s[20]; //объявление переменных
    float b;

    scanf("%[^\n]s", &s); //считывание с консоли
    scanf("%f", &b);

    printf("Строка: %s\n", s); //вывод в консоль
    printf("Вещ. число: %.2f", b);
    return 0;
}




