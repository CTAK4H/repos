#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Rus");

    int number, number2 = 0, sum, count = 0;

    printf("Введите трехзначное число: ");

    scanf("%d", &number);
    do
    {
        sum = 0;
        number2 = number;
        while (number2 > 0)
        {
            sum += number2 % 10;
            number2 /= 10;
        }
        number -= sum;
        count++;
        printf("%d %d\n", number, sum);
    } while (number > 1);
    printf("Потребовалось повторений - %d\n", count);
}