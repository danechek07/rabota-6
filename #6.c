#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian"); // ��������� ������� ������

    int number;      // ������������ �����
    int firstSum = 0; // ����� ������ ���� ����
    int lastSum = 0;  // ����� ��������� ���� ����

    // ������ ����� �����
    printf("������� ������������ �����: ");
    scanf("%d", &number);

    // ��������, �������� �� ����� ������������
    if (number < 100000 || number > 999999) {
        printf("������: ����� ������ ���� ������������ (�� 100000 �� 999999)!\n");
        return 1;
    }

    // ���������� � ������������ ������ ���� ����
    firstSum = (number / 1000) / 100 + ((number / 1000) / 10) % 10 + (number / 1000) % 10;

    // ���������� � ������������ ��������� ���� ����
    lastSum = (number % 1000) / 100 + ((number % 1000) / 10) % 10 + (number % 1000) % 10;

    // ��������, �������� �� ����� ����������
    if (firstSum == lastSum) {
        printf("����� %d �������� ���������� (����� ������ ���� ���� = %d, ����� ��������� ���� ���� = %d)\n", number, firstSum, lastSum);
    }
    else {
        printf("����� %d �� �������� ���������� (����� ������ ���� ���� = %d, ����� ��������� ���� ���� = %d)\n", number, firstSum, lastSum);
    }

    return 0;
}