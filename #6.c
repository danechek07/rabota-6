#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian"); // Установка русской локали

    int number;      // Шестизначное число
    int firstSum = 0; // Сумма первых трех цифр
    int lastSum = 0;  // Сумма последних трех цифр

    // Запрос ввода числа
    printf("Введите шестизначное число: ");
    scanf("%d", &number);

    // Проверка, является ли число шестизначным
    if (number < 100000 || number > 999999) {
        printf("Ошибка: число должно быть шестизначным (от 100000 до 999999)!\n");
        return 1;
    }

    // Извлечение и суммирование первых трех цифр
    firstSum = (number / 1000) / 100 + ((number / 1000) / 10) % 10 + (number / 1000) % 10;

    // Извлечение и суммирование последних трех цифр
    lastSum = (number % 1000) / 100 + ((number % 1000) / 10) % 10 + (number % 1000) % 10;

    // Проверка, является ли число счастливым
    if (firstSum == lastSum) {
        printf("Число %d является счастливым (сумма первых трех цифр = %d, сумма последних трех цифр = %d)\n", number, firstSum, lastSum);
    }
    else {
        printf("Число %d не является счастливым (сумма первых трех цифр = %d, сумма последних трех цифр = %d)\n", number, firstSum, lastSum);
    }

    return 0;
}