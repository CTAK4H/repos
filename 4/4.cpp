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
    int N, sum = 0, count = 0;
    float average;
    printf("Введите число N: ");
    scanf("%d", &N);

    int temp = N;
    while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
        count++;
    }
    average = (float)sum / count;
    printf("Среднее значение цифр: %.2f\n", average);

    CheckPositive(N); // Вызов функции для проверки числа

    return 0;
}