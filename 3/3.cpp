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
    int N, count = 0;
    printf("Введите число N: ");
    scanf("%d", &N);

    int temp = N;
    while (temp != 0) 
    {

        temp /= 10;
        count++;
    }
    printf("Количество цифр: %d\n", count);

    CheckPositive(N);

    return 0;
}