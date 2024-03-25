#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <locale.h>

void CheckPositive(int number) 
{
    setlocale(LC_ALL, "Rus");
    if (number > 0) {
        printf("Число положительное\n");
    }
    else if (number < 0) {
        printf("Число отрицательное\n");
    }
    else {
        printf("Число равно нулю\n");
    }
}

int main() 
{
    setlocale(LC_ALL, "Rus");
    int N, reversed = 0;
    printf("Введите число N: ");
    scanf("%d", &N);

    while (N != 0) {
        int digit = N % 10;
        reversed = reversed * 10 + digit;
        N = N / 10;
    }

    printf("Обратный порядок: %d\n", reversed);

    CheckPositive(reversed); // Вызов функции для проверки числа

    return 0;
}