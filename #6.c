#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");

    int number;
    int firstSum = 0;
    int lastSum = 0;

    printf("Введите шестизначное число: ");
    scanf("%d", &number);

    if (number < 100000 || number > 999999) {
        printf("Ошибка: число должно быть шестизначным (от 100000 до 999999)!\n");
        return 1;
    }

    firstSum = (number / 1000) / 100 + ((number / 1000) / 10) % 10 + (number / 1000) % 10;

    lastSum = (number % 1000) / 100 + ((number % 1000) / 10) % 10 + (number % 1000) % 10;

    if (firstSum == lastSum) {
        printf("Число %d является счастливым (сумма первых трех цифр = %d, сумма последних трех цифр = %d)\n", number, firstSum, lastSum);
    }
    else {
        printf("Число %d не является счастливым (сумма первых трех цифр = %d, сумма последних трех цифр = %d)\n", number, firstSum, lastSum);
    }

    return 0;
}
